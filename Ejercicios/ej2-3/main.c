#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 
//Ejercicio 2-3

int main(int argc, char *argv[]) {

	int num;
	
	printf("Ingrese numero: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("El numero %d es: par",num);	
	}else{
		printf("El numero %d es: impar",num);
	}
	
	return 0;
}
