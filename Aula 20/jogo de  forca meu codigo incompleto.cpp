#include <iostream>
using namespace std;





int main(){
	
int tam; 

cout<<"Digite o numero de letras da palavra: " << endl;
cin >>tam;

char palavra [tam];

cout<<"Digite a palavra: ";
int i;
for(i=0;i<tam;i++){
	cin >> palavra[i];
}

char letra;
int ponto=0;
int j;


while (ponto < tam){

	cout<< "Digite uma letra: ";
	cin>> letra;
	
for(j=0; j<tam; j++){
	if(palavra[j]==letra){
		ponto ++;
	}
}

}
return 0;
}

