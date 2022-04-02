#include <iostream>
#include <list>
using namespace std;



int main(){
	
	list <int> numeros;
	int tam;
	
	tam=10;
	
	for (int i=0; i<tam; i++){
		numeros.push_back(i);
	}

	for(int i=0; i<tam; i++){
		cout << numeros.front() << "\n";
		numeros.pop_front();
	}
return 0;
}

