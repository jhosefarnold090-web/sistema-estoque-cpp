#include <iostream>
#include <limits>
#include "utils.h"
using namespace std;

double lerDoubleValido(){
    double valido;
    while (true)
      {
        cin >> valido;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Valor invalido\nDigite um valor valido: \n";
        }else if(valido < 0){
            cout<<"Valor invalido\nDigite um valor valido: ";
        }else
        {
            cin.ignore(1000, '\n'); // limpa buffer
            return valido;
        } 
      }
}

int lerIntValido(){
    int valido;
    while (true)
      {
        cin >> valido;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Valor invalido\nDigite um valor valido: \n";
        }else if(valido < 0){
            cout<<"Valor invalido\nDigite um valor valido: ";
        }else
        {
            cin.ignore(1000, '\n'); // limpa buffer
            return valido;
        } 
      }
      return valido;
}
