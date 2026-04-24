#ifndef SYSTEM_H
#define SYSTEM_H
#include "Estoque.h"

class System
{
private:
    int opcao = 0;
public:
    Estoque est;
    System();
    void mostraMenu();
    void executarOpcao();
    void iniciar();
};
#endif