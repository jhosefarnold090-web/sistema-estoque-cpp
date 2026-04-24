#include "Estoque.h"
#include "Produto.h"
#include "utils.h"
#include <iostream>
using namespace std;


void Estoque::adicionarProduto(){
      string nome = "";
      int id = 0;

      while (true){
      cout<<"Digite o ID do produto: \n";
      id = lerIntValido();
      if (id <= 0)
      {
        cout<<"Valor invalido\nDigite um valor valido: ";
        continue;
      }
      
        
      bool idExiste = false;
      for (size_t i = 0; i < produto.size(); i++)
      {
        if (produto[i].getID() == id)
        {
            idExiste = true;
            break;
        }
       }
       if(idExiste){
        continue;
       }else
       {
        break;
       }
       
    } 
    
      cout<<"Digite o nome do produto: \n";
      if(cin.peek() == '\n') cin.ignore();
      getline(cin, nome);

      cout<<"Digite a quantidade do produto: \n";
      int quantidade = lerIntValido();
      
      cout<<"Digite o preco do produto: \n";
      double preco = lerDoubleValido();

      Produto novo(nome, id, quantidade, preco);
      produto.push_back(novo);
      cout<<"Produto Cadastrado: \n" << endl;

      cout<<"ID: " << id << "\n";
      cout<<"Nome: " << nome << "\n";
      cout<<"Quantidade: " << quantidade << "\n";
      cout<<"Preco: " << preco << "\n";
}

void Estoque::removerProduto(){
    int idDigitado;
    bool encontrado = false;
    
    cout<<"Digite o ID do Produto: \n";
    cin >> idDigitado;
    
    for (size_t i = 0; i < produto.size(); i++)
    {
        if (produto[i].getID() == idDigitado)
        {
        cout<<"Nome do Produto: "<< produto[i].getNome() << endl;
        cout<<"ID do produto: " << produto[i].getID() << endl;
        cout<<"Preco do produto: " << produto[i].getPreco() << endl;
        cout<<"Quantidade em estoque: " << produto[i].getQuantidade() << endl;
        encontrado = true;
        produto.erase(produto.begin() + i);
        cout<<"Produto removido com sucesso!!" << endl;
        break;
        }
        
    }
    if (!encontrado)
    {
        cout<<"Produto nao encontrado.\n"; 
    }
}

void Estoque::listarProduto(){
    if(produto.size() == 0){
        cout<<"Nenhum Produto cadastrado.\n";
        return;
    }
    for(size_t i = 0; i < produto.size(); i++){
        cout<<"\nProduto " << i + 1 << endl;
        cout<<"Nome do Produto: "<< produto[i].getNome() << endl;
        cout<<"ID do produto: " << produto[i].getID() << endl;
        cout<<"Preco do produto: " << produto[i].getPreco() << endl;
        cout<<"Quantidade em estoque: " << produto[i].getQuantidade() << endl;
    }
}

void Estoque::buscarProduto(){
    int idDigitado;
    bool encontrado = false;
    
    cout<<"Digite o ID do Produto: \n";
    cin >> idDigitado;
    
    for (size_t i = 0; i < produto.size(); i++)
    {
        if (produto[i].getID() == idDigitado)
        {
        cout<<"\nProduto encontrado!\n"<< endl;
        cout<<"Nome do Produto: "<< produto[i].getNome() << endl;
        cout<<"ID do produto: " << produto[i].getID() << endl;
        cout<<"Preco do produto: " << produto[i].getPreco() << endl;
        cout<<"Quantidade em estoque: " << produto[i].getQuantidade() << endl;
        encontrado = true;
        
        break;
        }  
    }
    if (!encontrado)
    {
        cout<<"Produto nao encontrado.\n"; 
    }
}

void Estoque::atualizarQuantidade(){
    int quantidadeAtual = 0;
    int idDigitado, select = 0;
    int quantidadeAdd = 0;
    int novaQuantidade = 0;
    bool encontrado = false;
    
    cout<<"Digite o ID do Produto: \n";
    cin >> idDigitado;
    
    for (size_t i = 0; i < produto.size(); i++)
    {
        if (produto[i].getID() == idDigitado)
        {
        cout<<"\nProduto encontrado!\n"<< endl;
        cout<<"Nome do Produto: "<< produto[i].getNome() << endl;
        cout<<"Quantidade em estoque: " << produto[i].getQuantidade() << endl;
        encontrado = true;
        quantidadeAtual = produto[i].getQuantidade();
        cout <<"[0] - Subtrair\n[1] - Adicionar\nEscolha uma opcao: " << endl;       
        while (true)
        {
            cin >> select;
            if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Valor invalido\nDigite um valor valido: \n";
        }else if(select < 0 || select > 1){
            cout<<"Valor invalido\nDigite um valor valido: ";
        }else
        {
            break;
        }
        }
        
        if(select == 1){
           cout<<"Digite a quantidade que deseja adicionar: " << endl;
           while (true)
        {
            cin >> quantidadeAdd;
            if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Valor invalido\nDigite um valor valido: \n";
        }else if(quantidadeAdd < 0){
            cout<<"Valor invalido\nDigite um valor valido: ";
        }else
        {
            break;
        }
        }
           novaQuantidade = quantidadeAtual + quantidadeAdd;
           produto[i].setQuantidade(novaQuantidade);
           cout<<"Quantidade atualizada!\nQuantidade atual: " << produto[i].getQuantidade() << endl;
           break;
        }

        else if(select == 0){
           cout<<"Digite a quantidade que deseja retirar: " << endl;
           while (true)
        {
            cin >> quantidadeAdd;
            if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Valor invalido\nDigite um valor valido: \n";
        }else if(quantidadeAdd < 0){
            cout<<"Valor invalido\nDigite um valor valido: ";
        }else
        {
            break;
        }
        }
           novaQuantidade = quantidadeAtual - quantidadeAdd;

           if(novaQuantidade < 0){
             cout<<"Quantidade em estoque nao pode ser negativo!! " << endl;
             novaQuantidade = 0;
             produto[i].setQuantidade(novaQuantidade);
             break;
           }
           produto[i].setQuantidade(novaQuantidade); 
           cout<<"Quantidade atualizada!\nQuantidade atual: " << produto[i].getQuantidade() << endl;
           break;
        }
    }
    if (!encontrado)
    {
        cout<<"Produto nao encontrado.\n"; 
    }
  }
}  
