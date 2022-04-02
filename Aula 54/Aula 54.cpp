#include <iostream>

using namespace std;

double divide (double, double ); //prototipando a fun��o

int main(){

    double n1, n2;
    cin >> n1 >> n2; //ler os valores


    try{
        cout << divide(n1, n2); //n1 e n2 v�o ser passados como os parametros p/ fun��o

    }catch(const char* erro){
        cout << "ERRO: " << erro << endl;

    }


	return 0;
}

double divide (double n10, double n20){ //criei a fun��o p/ dividir
   if(n20==0){
    throw "Erro de divisao por zero";
   }
   if(n10 >=10){
    throw "N1 precisa ser menor do que 10";
   }

    return n10/n20;

}
