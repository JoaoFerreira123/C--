#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imp();
private:
    int tipo;
    int velMax;
    bool arma;
};
void Veiculo::imp(){
    std::cout << "Tipo Veiculo........: " << tipo << std::endl;
    std::cout << "Velocidade Maxima...: " << velMax << std::endl;
    std::cout << "Qtde rodas..........: " << rodas << std::endl;
    std::cout << "Blindagem...........: " << blind << std::endl;
    std::cout << "Armamento...........: " << arma << std::endl;
    std::cout << "---------------------------------------"<< std::endl;
}


void Veiculo::setTipo(int tp){
    tipo=tp;
}

void Veiculo::setVelMax(int vm){
    velMax=vm;
}

void Veiculo::setArma(bool ar){
    arma=ar;
}


class Carro:public Veiculo{
  public:
    Carro();
};

Carro::Carro(){
    vel=0;
    blind=0;
    rodas=4;
    setArma(false);
    setTipo(2);
    setVelMax(180);

}


class Moto:public Veiculo{
public:
    Moto();
};

Moto::Moto(){
    vel=0;
    blind=0;
    rodas=2;
    setArma(false);
    setTipo(1);
    setVelMax(120);

}

#endif // CLASSES_H_INCLUDED
