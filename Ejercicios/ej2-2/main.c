#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 1J
//Ejercicio 2-2

int main(int argc, char *argv[]) {
	
	int cantNum, i, num, acumuladorPositivo, acumuladorNegativo, minimoPositivo, maximoNegativo, contadorPositivo, contadorNegativo;
	float promedioPositivo, promedioNegativo;
	
	acumuladorPositivo = 0;
	acumuladorNegativo = 0;
	contadorPositivo = 0;
	contadorNegativo = 0;
	
	printf("Cantidad de numeros a ingresar: ");
	scanf("%d",&cantNum);
	
	for(i=0;i<cantNum;i++){
		printf("Ingrese numero: ");
		scanf("%d",&num);
		if(acumuladorPositivo==0||num<minimoPositivo&&num>0){
			minimoPositivo = num;
		}
		if(acumuladorNegativo==0||num<maximoNegativo&&num<0){
			maximoNegativo = num;
		}
		if(num>=0){
			acumuladorPositivo = acumuladorPositivo + num;
			contadorPositivo ++;
		}else{
			acumuladorNegativo = acumuladorNegativo + num;
			contadorNegativo++;
		}
	}
	
	promedioPositivo = (float)acumuladorPositivo/contadorPositivo;
	promedioNegativo = (float)acumuladorNegativo/contadorNegativo;
	
	printf("El promedio de los positivos es: %.2f y su minimo es: %d\n",promedioPositivo,minimoPositivo);
	printf("El promedio de los negativos es: %.2f y su maximo es: %d",promedioNegativo,maximoNegativo);
	
	return 0;
}
