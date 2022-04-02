#include <iostream>
using namespace std;

int main(){

int matriz [2][3];
int lin, col;



for(lin=0; lin<2; lin++){
	for(col=0; col<3; col++){		//para ler os valores
		cin >> matriz[lin][col];
	}
	
}

for (lin=0; lin<2; lin++){
	for(col=0; col<3; col++){			//para imprimir os valores lidos
		cout << matriz[lin][col] << " ";
		
	}
	cout << "\n";
}

return 0;
}

