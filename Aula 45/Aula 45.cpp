#include <iostream>
#include "Aviao.h"

using namespace std;

int main (){

    Aviao *av1=new Aviao(3);   //criando os 3 objetos
    Aviao *av2=new Aviao(1);
    Aviao *av3=new Aviao(2);

    av1->imprimir();     //chamando a função para imprimir
    av2->imprimir();
    av3->imprimir();

    return 0;
}
