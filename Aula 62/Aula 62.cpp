#include <iostream>
#include <memory>
using namespace std;

int main(){

    unique_ptr<string>str(new string("Joao"));

    cout << *str << " - tamanho:" << str->size() << endl;


	return 0;
}
