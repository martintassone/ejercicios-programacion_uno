#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 1J
//Ejercicio 1-3

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	
	printf("Ingrese el primer numero: ");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&num2);
	printf("Ingrese el tercer numero: ");
	scanf("%d",&num3);
	
	if(num1>num2&&num1<num3||num1<num2&&num1>num3){
		printf("El numero del medio es: %d",num1);
	}else{
		if(num2>num1&&num2<num3||num2<num1&&num2>num3){
			printf("El numero del medio es: %d",num2);
		}else{
			if(num3>num1&&num3<num2||num3<num1&&num3>num2){
				printf("El numero del medio es: %d",num3);
			}else{
				printf("No existe numero del medio");
			}
		}
	}
	
	
	
	
	
	return 0;
}
