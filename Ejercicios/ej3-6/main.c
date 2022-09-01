#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 1J
//Ejercicio 3-6

int descuento(int num, int descuento);

int main(int argc, char *argv[]) {
	
	int numero1, numFinal;
	
	printf("Ingrese numero: ");
	scanf("%d",&numero1);
	
	while(numero1<10||numero1>100){
		printf("Reingrese numero: ");
		scanf("%d",&numero1);	
	}
	
	numFinal = descuento(numero1,5);
	
	printf("Con el descuento el numero queda en: %d",numFinal);
	
	return 0;
}

int descuento(int num, int descuento){
	int num2, numFinal;
	
	num2 = (descuento*num)/100;
	numFinal = num-num2;
	
	return numFinal;
}




