#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 1J
//Ejercicio 3-7

int operacion(int, int, char);

int main(int argc, char *argv[]) {
	
	int numero1, numero2, total;
	char opcion;
	
	printf("Ingrese numero: ");
	scanf("%d",&numero1);
	while(numero1<10||numero1>100){
		printf("\nReingrese numero: ");
		scanf("%d",&numero1);	
	}
	
	printf("\nIngrese numero: ");
	scanf("%d",&numero2);
	while(numero2<10||numero2>100){
		printf("\nReingrese numero: ");
		scanf("%d",&numero2);	
	}
	
	printf("\ndesea restar 'r' o sumar 's'");
	fflush(stdin);
	scanf("%c",&opcion);
	while(opcion != 's' && opcion != 'r'){
		printf("\ndesea restar 'r' o sumar 's'");
		fflush(stdin);	
		scanf("%c",&opcion);	
	}
	
	total = operacion(numero1,numero2,opcion);
	
	printf("el resultado es: %d",total);
	
	return 0;
}

int operacion(int num1, int num2, char operacion){
	int suma, resta;
	
	suma = num1+num2;
	resta = num1-num2;
	
	if(operacion=='s'){
		return suma;
	}else{
		return resta;
	}
}

