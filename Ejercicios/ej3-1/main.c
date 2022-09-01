#include <stdio.h>
#include <stdlib.h>

void mostrar(int num);

//Martin Tassone
//Ejercicio 3-1

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Ingrese numero: ");
	scanf("%d",&num);
	
	mostrar(num);
	
	return 0;
}

void mostrar(int num){
	printf("El numero ingresado fue: %d",num);
}
