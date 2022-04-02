#include <iostream>
using namespace std;

int main (){
	
	int val;
	
	
	cout<<"Selecione um meio de transporte:\n";
	cout<<" [1] - Carro \n [2] - Moto \n [3] - Aviao \n [4] - Helicoptero \n ";
	cin>> val;
	
	switch(val){
		case 1:
		case 2:
			cout<<"Transporte terrestre! \n ";	
			switch(val){
				case 1:
					cout<<"Capacidade maxima: 5 pessoas \n";
					break;
				case 2:
					cout<<"Capacida maxima: 2 pessoas \n";
					break;
			}
		break;
		
		case 3:
		case 4:
			cout<<"Transporte Aereo! \n";
			switch(val){
				case 3:
					cout<<"Capacidade maxima: 15 pessoas \n";
					break;
				case 4:
					cout<<"Capacidade maxima: 4 pessoas \n";
					break;
			}
		break;		
		default:
			cout<<"Transporte invalido. \n";
}
				
	system("pause")	;
			
	return 0;	
	}
	
	

