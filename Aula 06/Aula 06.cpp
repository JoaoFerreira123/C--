#include <iostream>
using namespace std;

int n1, n2;

int main (){

	int res1;
	int res2; 
	
	cout <<"CALCULADORA DE DIVISAO\n";
	cout << "Digite o numerador: ";
	cin >> n1;
	cout << "Digite o denominador: ";
	cin >> n2;
	
	res1=n1/n2;
	res2=n1%n2;
	
//	cout << "A soma eh: " << res << "\n \n";

	cout << "A divisão de " << n1 << " por " << n2 << " eh " << res1 << " e o resto da divisao eh " << res2 << "\n \n" ;
	
	system("pause");
	return  0;
}
