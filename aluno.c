#include<stdio.h>




typedef struct {
	int idade;
	char nome[30];
	float peso;
	float altura;
}Aluno;


Aluno setAluno(int idade,char nome,float peso,float altura){
	
	Aluno aluno;
	aluno.idade = idade;
	aluno.nome[30] = nome;
	aluno.peso;
	aluno.altura = altura;
	return aluno;
}


void mostrarAluno( Aluno aluno){
	printf("Idade: %d Nome: %c Peso: %f Altura: %f ",aluno.idade,aluno.nome,aluno.peso,aluno.altura);
}



main(){
	
	Aluno alunoTads;
	
	alunoTads = setAluno(18,"Daniel",68,1.75);
	mostrarAluno(alunoTads);	
	
}
