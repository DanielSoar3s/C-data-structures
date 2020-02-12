#include<stdio.h>

void troca (int n1,int n2){
	int aux;
	
	aux = n1;
	n1 = n2;
	n2 = aux;
	printf("n1 = %d e n2 = %d",n1,n2);
}




main(){
		int n1 = 5;
		int n2 = 3;
		
		troca(n1,n2);
	
}
