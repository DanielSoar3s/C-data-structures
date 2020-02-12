#include<stdio.h>
#include<locale.h>
#define VALOR_MAXIMO 10

int valores[VALOR_MAXIMO];
int primeiro = 0;
int ultimo = 0;
int total = 0;


void inserir(int elemento){
	if(filaCheia()){
		printf("Não dá de inserir pois está cheia !");
	}
	else{	
		valores[ultimo] = elemento;
		ultimo = ultimo + 1;
		total++;
	}
}

int retirar(){
	if(filaVazia()){
		printf("Fila está vazia !");
	}
	else{
		int elemento;
		elemento = valores[primeiro];
		primeiro = (primeiro + 1 ) % VALOR_MAXIMO;
		total = total - 1;
		return elemento;
	}
}	

int filaVazia(){
	return (primeiro == ultimo);
}

int filaCheia(){
	return total==VALOR_MAXIMO;
}

void exibir() {
	int i;
	if(filaVazia()){
		printf("FILA AINDA ESTÁ VAZIA\nINSIRA VALORES PARA FUNCIONAR\n");
	}
	else{
		for(i=primeiro;i<ultimo;i++){
			printf(" %d ", valores[i]);
		}
	}
}

//prototipos
/*void inserir(int);
int retirar();
int filaVazia();
int filaCheia();
void exibir();
*/	

main(){
	setlocale(LC_ALL, "Portuguese");
	int valor;
	int opcao;
	do{
		
		printf("\nSelecione a opcao:\n 1.INSERIR\n 2.RETIRAR\n 3.EXIBIR\n 4.FINALIZAR FILA\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:			
				printf("\nInsira o valor: \n");
				scanf("%d",&valor);
				inserir(valor);
				break;
			case 2:
				retirar();
				break;
			case 3:
				exibir();
				break;
			case 4:
				break;
			default:
				printf("\nVALOR INVALIDO\n");
				break;				
		}	
	}while(opcao != 4);	
}
