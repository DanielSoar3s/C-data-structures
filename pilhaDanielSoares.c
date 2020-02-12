#include<stdio.h>
#define VALOR_VETOR 10
#include<locale.h>
#include<stdlib.h>
int elementos[VALOR_VETOR];
int topo = -1;


void push(int e){
	if(pilhaCheia()){
		printf("\nPILHA ESTÁ CHEIA\n");
	}
	else{
		topo++;
		elementos[topo] = e;	
	}
}

int pop(){
	if(pilhaVazia()){
        printf("\nPILHA ESTA VAZIA");
    }
    else{
		int e;
		e = elementos[topo];
		topo--;
		return e;
	}
}

int pilhaVazia(){
	return (topo == -1);
}

int pilhaCheia(){
	return (topo == (VALOR_VETOR - 1)); 
}

int top(){
	if(pilhaVazia()){
		printf("PILHA VAZIA");
	}
	else{
		return elementos[topo];
	}
}

void show(){
	if(pilhaVazia()){
		printf("A pilha está vazia");
	}
	int i;
	for(i=topo; i>=0; i--){
        printf("\n%d",elementos[i]);
   	}
}


main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	int valor;
	
	do{
		
		printf("\nESCOLHA UMA OPCAO: \n1.PUSH\n2.POP\n3.TOP\n4.SHOW\n5.FINALIZAR\n");
		scanf("%d",&opcao);
		system("cls");
		switch(opcao){
			
			case 1:
				printf("Insira um valor: ");
				scanf("%d",&valor);
				push(valor);
				break;
			case 2:
				pop();
				break;
			case 3:
				printf("%d",top());	
				break;
			case 4:
				show();
				break;		
			default:
				printf("VALOR NÃO DISPONIVEL");
				break;
		}		
	}while(opcao != 5);
}
















