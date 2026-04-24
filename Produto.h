#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class Produto
{
private:
    std::string nome = "";
    int id = 0;
    int quantidade = 0;
    double preco = 0.0; 
public:

    Produto(std::string _nome, int _id, int _quantidade, double _preco);
    void setQuantidade(int quantidade);
    void setID(int id);
    void setPreco(double preco);
    void setNome(std::string nome);
    


    int getID();
    std::string getNome();
    int getQuantidade();
    double getPreco();

};
#endif