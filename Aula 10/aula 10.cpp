#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
	
	int n1;
	int n2;
	int soma;
	char sn;
	
	inicio:
	system ("cls");
	
	cout<<"Insira a primeira nota: ";
	cin >> n1;
	
	cout<<"Insira a segunda nota: ";
	cin >> n2;
	
	soma=n1+n2;
	
	if (soma>=60){
		cout<<" Aprovado\n ";
		
	}
	else if (soma>=40){
		cout<<" Em recuperacao \n";
		
	}
	else{
	
		cout<<" Reprovado \n";
	}
	
	cout<<"Deseja inserir mais notas? [S/N]";
	cin>> sn;
	if (sn=='S' or 's'){
		goto inicio;
	}
	
	return 0;
}
