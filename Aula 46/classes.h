#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
public:
    int vel;
    int tipo;
    Veiculo(int tp);
    int getVelMax();
    void setVelMax(int vm);
private:
    std::string nome;
    int velMax;
    bool ligado;
};

int Veiculo::getVelMax(){
    return velMax;
}

void Veiculo::setVelMax(int vm){
    velMax=vm;
}

Veiculo::Veiculo(int tp){ //1-carro, 2-aviao, 3-navio
        tipo=tp;
        if(tipo==1){
            nome="Carro";
            setVelMax(200);
        }else if(tipo==2){
            nome="Aviao";
            setVelMax(800);
        }else if(tipo==3){
            nome="Navio";
            setVelMax(120);
        }



}

#endif // CLASSES_H_INCLUDED
