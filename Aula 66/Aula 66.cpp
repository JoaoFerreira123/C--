#include <iostream>

using namespace std;

class Carro{
private:
    int velMax;
    const char* nome;
public:
    int potencia;
    int getVelMax(){
        return velMax;
    }
    const char* getNome(){
        return nome;
    }
    Carro(){
        velMax=120;
        potencia=85;
        nome="Popular";
    }
    Carro(int pt, const char* no):potencia(pt), nome(no){
        if(pt<100){
            velMax=120;
        }else if(pt<200){
            velMax=240;
        }else{
            velMax=360;
        }
    }
};



int main(){

    Carro c1;
    cout<< c1.getNome() << " - " << c1.potencia << " - " << c1.getVelMax() << endl;

    Carro c2{180, "Esportivo"};
    cout<< c2.getNome() << " - " << c2.potencia << " - " << c2.getVelMax() << endl;

	return 0;
}
