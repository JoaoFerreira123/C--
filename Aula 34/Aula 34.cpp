#include <iostream>
using namespace std;

struct Carro{       //cria-se dai as variaveis, no caso ali criei 4 variaveis
	string nome;
	string cor;
	int pot;
	int velMax;
	
	void insere(string stnome, string stcor, int stpot, int stvelMax){
		nome=stnome;
		cor=stcor;
		por=stpot;
		velMax=stvelMax;
	}
	
};

int main(){
	
	Carro car1;
	car1.nome="Gol";
	car1.cor="Vermelho";
	car1.pot=450;
	car1.velMax=200;
	
	cout<< car1.nome << "\n";
	cout<< car1.cor << "\n";
	cout<< car1.pot << "\n";
	cout<< car1.velMax << "\n";



return 0;
}

