#include <stdio.h>
#include <stdlib.h>

// Martin Tassone 1J
// Ejercicio 1-1

int main(int argc, char *argv[]) {
	
	int num1, num2, suma;

	printf("Ingrese el primer numero: ");
	scanf("%d",&num1);
	while(num1<-50||num1>100){
		printf("El numero debe estar entre -50 y 100, reingrese: ");
		scanf("%d",&num1);
	}
	printf("Ingrese el segundo numero: ");
	scanf("%d",&num2);
	while(num2<-50||num2>100){
		printf("El numero debe estar entre -50 y 100, reingrese: ");
		scanf("%d",&num2);
	}
	
	suma = num1 + num2;
	
	printf("La suma de ambos numeros es: %d",suma);
	
	return 0;
}
