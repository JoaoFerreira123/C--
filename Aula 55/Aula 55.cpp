#include <iostream>

using namespace std;

class Veiculo {
public:
    int tipo;
    string nome;


};

int main(){

    Veiculo v1{1, "Carango"};
    cout << v1.tipo << " - " << v1.nome << endl;
	return 0;
}
