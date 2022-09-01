#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 
//Ejercicio 3-3

int paridad(int num);

int main(int argc, char *argv[]) {
	int num, resultado;
	
	printf("Ingrese numero: ");
	scanf("%d",&num);
	
	resultado=paridad(num);
	
	printf("1>PAR, 0>IMPAR: %d",resultado);
	
	return 0;
}

int paridad(int num){
	if(num%2==0){
		return 1;
	}else{
		return 0;
	}
}
