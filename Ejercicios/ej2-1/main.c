#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 1J
//Ejercicio 2-1

int main(int argc, char *argv[]) {
	
	int i, num, acumulador;
	float promedio;
	
	acumulador = 0;
	
	for(i=0;i<7;i++){
		printf("Ingrese numero: ");
		scanf("%d",&num);
		while(num>=0){
			printf("El numero debe ser negativo disinto de 0, reingrese: ");
			scanf("%d",&num);
		}
		acumulador = acumulador + num;			
	}
	
	promedio = (float)acumulador/7;
	
	printf ("El promedio de los numeros es: %.2f",promedio);
	
	return 0;
}
