#include<stdio.h>
#include<math.h>



typedef struct{
	float a;
	float b;
}Ponto;



float distancia(Ponto *x,Ponto *y){
	float distancia = sqrt((y->a - x->a) * (x->a - y->a) + (x->b - y->b) * (x->b - x->b) );
	
	return distancia;
}

int main(){
	
	Ponto pontoA[5];
	Ponto pontoB[5];
	
	printf("Informe a o primeiro ponto: ");
	scanf("%f%f",&pontoA->a,pontoA->b);
	
	printf("Informe a do segundo ponto: ");
	scanf("%f%f",&pontoB->b,pontoB->a);
	
	
	
	float resultado = distancia(&,&);
	printf("O resultado da distancia é: ",resultado);
	
}
