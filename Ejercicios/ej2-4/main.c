#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 
//Ejercicio 2-4

int main(int argc, char *argv[]) {
	
	int i, num, menorNum, bandera, banderaDos, mayorPar, productoNegativos, mayorNum, contador, banderaTres;
	
	bandera = 0;
	banderaDos = 0;
	banderaTres = 0;
	productoNegativos = 1;
	contador = 0;
	
	for(i=0;i<8;i++){
		printf("Ingrese numero: ");
		scanf("%d",&num);
		while(num==0){
			printf("El numero debe ser distinto de cero, reingrese numero: ");
			scanf("%d",&num);	
		}
		if(bandera==0||num<menorNum){
			menorNum = num;
			bandera = 1;
		}
		if(num%2==0){
			if(banderaDos==0||num>mayorPar){
				mayorPar = num;
				banderaDos = 1;
			}
		}
		if(num<0){
			productoNegativos = productoNegativos * num;
		}
		if(banderaTres==0||num>mayorNum){
			mayorNum = num;
			contador++;
			banderaTres = 1;
		}
	}
	
	printf("El menor numero es: %d",menorNum);
	printf("\nEl mayor de los pares es: %d",mayorPar);
	printf("\nEl producto de los Negativos es: %d",productoNegativos);
	printf("\nLa posicion en que se ingreso el mayor numero es la: %d",contador);
	
	return 0;
}
