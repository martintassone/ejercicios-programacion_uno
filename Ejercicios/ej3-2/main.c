#include <stdio.h>
#include <stdlib.h>

//Martin Tassone
//Ejercicio 3-2

float retornar(void);

int main(int argc, char *argv[]) {
	
	float num;
	
	num=retornar();
	
	printf("El numero ingresado fue: %.2f",num);
	
	return 0;
}

float retornar(void){
	float num;
	printf("Ingrese numero flotante: ");
	scanf("%f",&num);
	return num;
}
