#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 
//Ejercicio 3-4

void mostrar(int num);
float retornar(void);

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Ingrese numero: ");
	scanf("%d",&num);
	
	mostrar(num);
	
	float numDos;
	
	numDos=retornar();
	
	printf("\nEl numero ingresado fue: %.2f",numDos);
	
	return 0;
}

void mostrar(int num){
	
	while(num<1||num>10){
		printf("\nReingrese numero: ");
		scanf("%d",&num);		
	}
	printf("\nEl numero ingresado fue: %d",num);

}

float retornar(void){
	
	float num;
	printf("\nIngrese numero flotante: ");
	scanf("%f",&num);
	while(num<1||num>10){
		printf("\nReingrese numero: ");
		scanf("%f",&num);		
	}
	return num;
	
}


