#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream Arquivo;
    Arquivo.open("Ola Mundo.txt" ,ios::app); //ola mundo � o nome do arquivo

    Arquivo << "Engenheiro Mecatronico"; //o texto � esse
    Arquivo.close();


    return 0;
}
