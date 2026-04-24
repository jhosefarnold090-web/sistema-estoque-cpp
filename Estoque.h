#ifndef ESTOQUE_H
#define ESTOQUE_H
#include <vector>
#include "Produto.h"

class Estoque
{
private:
    std::vector<Produto> produto;
    
public:
    Estoque(){};
    void adicionarProduto();
    void buscarProduto();
    void removerProduto();
    void listarProduto();
    void atualizarQuantidade();
    
};
#endif