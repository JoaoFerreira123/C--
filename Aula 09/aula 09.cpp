#include <iostream>

using namespace std;

int main (){
    int num1;
    int num2;

    cout<<"Insira o primeiro numero: ";
    cin>> num1;

    cout<<"Insira o segundo numero: ";
    cin>> num2;

    if (num1>num2){
        cout<<num1<< " eh maior do que " <<num2;

    }
    else{
        cout <<num1<< "  eh menor do que " <<num2;
    }


    return 0;
}
