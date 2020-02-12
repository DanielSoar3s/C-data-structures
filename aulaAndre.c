#include<stdio.h>

int calcularPotencia(int b,int e){
	int i;
	int l = 1;
	for(i = 0; i < e; i++){
		l = b * l; 
	}
	return l;
}

int calcularPotRec(int b,int e){

	if( e == 0){
		return 1;
	}
	else if( b == 0 && e == 0 ){
		return 1;
	}
	else 
	return b * calcularPotRec( b,e - 1); 
}



main(){
	
	int b = 2;
	int e = 5;
	int l;
	l = calcularPotencia(b,e);
	printf("%d\n",l);
	int rec = calcularPotRec(b,e);
	printf("%d",rec);
	
	
}
