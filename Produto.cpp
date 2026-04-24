#include "Produto.h"
#include <iostream>
using namespace std;


Produto::Produto(string _nome, int _id, int _quantidade, double _preco){
   nome = _nome;
   id = _id;
   quantidade = _quantidade;
   preco = _preco;
};


void Produto::setID(int id){
    this->id = id;
};
int Produto::getID(){
    return id;
}
void Produto::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}
int Produto::getQuantidade(){
    return quantidade;
}
void Produto::setNome(string nome){
    this->nome = nome;
}
string Produto::getNome(){
    return nome;
}
void Produto::setPreco(double preco){
    this->preco = preco;
}
double Produto::getPreco(){
    return preco;
}

