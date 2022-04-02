#include <iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream arquivo1;
    string linha; //variavel para armazenar a linha lida
    arquivo1.open("Ola Mundo.txt");

    if(arquivo1.is_open()){
        while(getline(arquivo1, linha)){
            cout << linha << endl;
        }
        arquivo1.close();
    }else{
        cout<<"Nao foi possivel abrir o arquivo \n";
    }

	return 0;
}
