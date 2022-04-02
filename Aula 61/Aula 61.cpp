#include <iostream>
#include<map>
using namespace std;

int main(){

    map<int,string>prod;
    map<int,string>::iterator itmap; //criei o iterator

    prod.insert(pair<int, string>(0, "Mouse"));
    prod.insert(pair<int, string>(1, "Teclado"));
    prod.insert(pair<int, string>(2, "Monitor"));
    prod.insert(pair<int, string>(3, "Cx. Som"));

    itmap=prod.find(2); //dizendo para ele procurar o de chave 2
    if(itmap==prod.end()){
        cout << "Produto nao encontrado" << endl;

    }else{
        cout << "Produto em estoque" << endl;
        cout << "Codigo: " << itmap->first << " - " << "Nome: " << itmap->second << endl;
    }



	return 0;
}
