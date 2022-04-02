#include <iostream>
#include<fstream>

using namespace std;

int main(){

    fstream arquivo; //criando a classe e o objeto arquivo
    char ins = 's';
    string nome;

    arquivo.open("OlaMundo.txt", ios::out | ios::app);//criando o arquivo do tipo out (recebe dados)

    while((ins=='s')or(ins=='S')){
        cout << "Digite o nome: ";
        cin >> nome;
        arquivo << nome << endl;  //escreve o conteúdo de nome no arquivo
        cout << "Quer digitar mais um nome? [S/N]";
        cin >> ins;
        system("cls");
    }
    arquivo.close();
	return 0;
}
