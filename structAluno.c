
#include <stdio.h>
#define MAX 3
typedef struct{
   int matricula;
   //float notas[3];
   char nome[81];
}Aluno;



void LeAluno(Aluno *aluno){
	int i;
	for(i = 0; i < MAX; i++){
		printf("Entre com a matricula: \n");
		scanf("%d", &aluno[i]->matricula);
		printf("Entre com o nome: \n");
		scanf(" %80[^\n]",aluno[i]->nome);
	}
}


void ImprimeTurma(Aluno *aluno){
	printf("Matricula: %d\n ",aluno->matricula);
	printf("Nome: %s\n", aluno->nome);
}

void imprimirTudo(Aluno *aluno){
	int i;
	for(i = 0; i < MAX; i++){
		ImprimeTurma(i);
	}
}

int main(){
	int i;
	Aluno turma[i];
	LeAluno(turma);
	imprimirTudo(turma);      
	
	

}
