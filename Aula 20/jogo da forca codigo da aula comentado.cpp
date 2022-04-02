#include <iostream>
using namespace std;

int main(){
	
	char palavra [30], letra[1], secreta[30];  //o palavra terá a palavra, letra a letra que o jogador indicar em cada rodada e secreta vai ser a palavra sendo revelada conforme o jogador acerta
	int tam, i, chances, acertos;
	bool acerto;   //vai servir para verificar se a pessoa digitou uma letra certa ou errada
	
	chances=6; //vai ter 6 chances para acertar a palavra
	tam=0; //tamanho da palavra começa em 0
	i=0; 
	acerto=false; //inicializando em false pq ainda nao acertou nada
	acertos=0; //inicializando em 0 pq ainda nao teve nenhum acerto
	
	cout<<"Digite a Palavra Secreta: ";
	cin>> palavra;
	system("cls"); //limpa a tela. Não adicionou biblioteca pois pra esse comando nao precisa
	
	while(palavra[i] != '\0'){  //vendo o tamanho da palavra. Tem a explicacao no OneNote #20.	
		i++;
		tam++;
	}
	for(i=0;i<30;i++){    //preenche a palavra secreta de traços, pra primeiramente ficar toda escondida e dps ir sendo revelada
		secreta[i]='-';
	}
	
	while(chances > 0 and acertos < tam){  //loop principal do jogo. Vai executar enquanto tiver chances (chances>0) e enquanto o numero de acertos for menor do que a palavra, pq se for = já acertou a palavra inteira e ganhou. 
		cout<< "Chances Restantes: " << chances << "\n\n"; //a quantidade de chances que o jogador ainda tem. Vai ficar sempre visivel
		cout<< "Palavra Secreta: ";
		for(i=0; i<tam; i++){
			cout<< secreta[i]; //esse for vai revelando a palavra secreta conforme o jogador for acertando. Primeiramente como nao tem acertos, só vai exibir os tracinhos
		}
		cout<<"\n\nDigite uma Letra: ";  //da a oportuniade do usuario digitar uma letra
		cin>> letra[0]; //armazena a letra no vetor letra, posicão 0
		for(i=0; i<tam; i++){ //loop que vai percorrer a palavra, vendo se houve acertos
			if(palavra[i]==letra[0]){  //verifica se a letra digitada esta em cada um dos indices do vetor palavra
				acerto=true;  //acerto recebe true, indicando que houve um acerto
				secreta[i]=palavra[i]; //se a letra for correta, vai pegar qual a posição [i] da palavra aquela letra está e colocar na secreta, ou seja, vai mostra a letra ao inves do tracinho na posicao correta
				acertos++; //vai incrementar a variavel acerto, indicando que houve um acerto
			  
			}
		}
		if(!acerto){ //se nao houve acertos, vai diminuir o numero de chances
			chances--;
		}
		acerto=false;  //acabou ja toda a rotina de uma rodada, entao voltamos o acerto para false.
		system("cls"); //limpa a tela
		 
	}
	
	//se já saiu do while é pq o numero de chances é =0, ou seja, acabou as chances ou pq ganhou, tem que verificar qual dessas duas opcoes é
	if(acertos=tam){
		cout<<"Voce venceu!\n\n";
	}
	else{
		cout<<"Voce perdeu!\n\n";
	}
	
	system("pause");
	return 0;
}

