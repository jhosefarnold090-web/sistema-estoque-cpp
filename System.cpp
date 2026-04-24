#include <iostream>
#include "System.h"
using namespace std;

System::System(): opcao(0)
{}

void System::mostraMenu(){
    cout<<"\n====MENU====\n";
    cout<<"1 - Adicionar Produto.\n";
    cout<<"2 - Remover Produto.\n";
    cout<<"3 - Listar Produtos.\n";
    cout<<"4 - Buscar Produto.\n";
    cout<<"5 - Atualizar Quantidade.\n";
    cout<<"0 - Sair.\n";
    cout<< "Escolha: \n";

     while (true)
      {
        cin >> opcao;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Valor invalido\nDigite um valor valido: \n";
        }else if(opcao < 0 || opcao > 5){
            cout<<"Valor invalido\nDigite um valor valido: ";
        }else
        {
            break;
        }    
      }
}

void System::executarOpcao(){
    
    switch (opcao)
    {
    case 1:
        est.adicionarProduto();
        est.listarProduto();
        cout<<"Pressione ENTER para continuar..." << endl;
        cin.get();
        break;
    case 2:
        est.removerProduto();
        est.listarProduto();
        cout<<"Pressione ENTER para continuar..." << endl;
        
        cin.get();
        break;
    case 3:
        est.listarProduto();
        cout<<"Pressione ENTER para continuar..." << endl;
        
        cin.get();
        break;
    case 4:
        est.buscarProduto();
        cout<<"Pressione ENTER para continuar..." << endl;
       
        cin.get();
        break;
    case 5:
        est.atualizarQuantidade();
        cout<<"Pressione ENTER para continuar..." << endl;
        
        cin.get();
        break;    
    case 0:
        cout<<"Saindo..." << endl;
        break;
    default:
       cout<<"Opcao Invalida!! "<< endl;
        break;
    }
}

void System::iniciar()
{
   do{
    mostraMenu();
    executarOpcao();
   }while (opcao != 0);
    
}