#include <iostream>
using namespace std;

  int soma (int n1, int n2); //apresentando a funcao para o programa

int main(){
	int resultado; //criar a variavel que vai receber o valor de retorno
	resultado = soma(15, 5); //chamando a fução e armazenando o retorno na variavel
	cout<<resultado<< "\n\n"; //imprimindo o valor de retorno 
return 0;
}

int soma(int n1, int n2){
	return n1+n2;
}

