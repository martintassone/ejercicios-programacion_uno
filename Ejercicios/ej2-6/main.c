#include <stdio.h>
#include <stdlib.h>

//Martin Tassone
//Ejercicio 2-6

int main(int argc, char *argv[]) {
	
	int i, contador;
	char letra;
	
	contador = 0;
	
	for(i=0;i<5;i++){
		printf("Ingrese letra: ");
		fflush(stdin);
		scanf("%c",&letra);
		if(letra=='m'){
			contador++;
		}	
	}
	
	printf("Cantidad de letras m que se ingresaron: %d",contador);
	
	
	return 0;
}
