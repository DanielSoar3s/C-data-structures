#include<stdio.h>


typedef struct{
	int idade;
	float altura;
	float peso;
}Pessoa;


Pessoa setPessoa(int idade, float altura, float peso){
	
	Pessoa P;
	P.idade = idade;
	P.altura = altura;
	P.peso = peso;
	return P;
}

void imprimePessoa(Pessoa P){
	printf("Idade: %d Peso: %f Altura: %f \n",P.idade,P.peso,P.altura); 
}



main(){
	
	Pessoa Joao;
	
	Joao = setPessoa(18,62.8,1.75);
	imprimePessoa(Joao);
	
}


