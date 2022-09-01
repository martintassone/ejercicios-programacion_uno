#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 1J
//Ejercicio 1-2

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	
	printf("Ingrese el primer numero: ");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&num2);
	printf("Ingrese el tercer numero: ");
	scanf("%d",&num3);
	
	if(num1==num2&&num1==num3){
		printf("Todos los numeros son iguales");	
	}else{
		if(num1>num2&&num1>num3){
			printf("El numero mas grande es %d",num1);	
		}else{
			if(num2>num1&&num2>num3){
				printf("El numero mas grande es %d",num2);	
			}else{
				printf("El numero mas grande es %d",num3);
			}
		}
	}
	
	return 0;
}
