#include <iostream>
using namespace std;

int main(){
	
	string nome;
	char sn;
	
	inicio: 
	
	cout<<"Digite o nome de uma pessoa: ";
	cin>> nome;
	if (nome == "luisa"){
		cout<<"Era pra ser o nome de uma pessoa e nao de uma deusa grega! \n";
	
	}
	else 
		cout<<"Ok\n";
	
	cout<<"Quer digitar mais um nome? [S/N]";
	cin>> sn;
	
	
	if(sn == 'S' or 's'){
		goto inicio;
	}
	
	return 0;
}
