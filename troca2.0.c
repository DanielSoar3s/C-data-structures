#include<stdio.h>



void troca(int x,int y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
}

main(){
  	int x =5,y = 3;
  	troca(x,y);
 	printf("x = %d e y = %d",x,y);
}
