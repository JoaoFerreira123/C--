#include <iostream>
using namespace std;

int main (){
	
	int val;
	
	inicio:
	cout<<"Selecione uma cor:\n";
	cout<<" [1, 2, 3] = Verde \n [4, 5, 6] = Azul \n ";
	cin>> val;
	
	switch(val){
		
		case 1:
		case 2:
		case 3:
			cout<< "Cor selecionada: Verde\n";
			break;
		case 4:
		case 5:
		case 6:
			cout<< "Cor selecionada: Azul\n";
			break;
		
		
		default:
			cout<<"Selecione uma das duas cores indicadas\n";
			goto inicio;
		
		
		
		
		
		
	}
	
	return 0;
}
