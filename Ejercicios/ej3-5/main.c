#include <stdio.h>
#include <stdlib.h>

//Martin Tassone 
//Ejercicio 3-5

int restar1(int, int);
int restar2(void);
void restar3(int, int);
void restar4(void);

int main(int argc, char *argv[]) {
	
	int resultado, resultado2;
	int num1, num2;
	
	printf("ingrese primer numero: ");
	scanf("%d",&num1);
	printf("\ningrese segundo numero: ");
	scanf("%d",&num2);	
	
	resultado = restar1(num1,num2); 
	
	printf("\nel resultado es %d",resultado);
	
	resultado2 = restar2();
	printf("\nel segundo resultado es %d",resultado2);
	
	restar3(num1,num2);
	
	restar4();
	return 0;
}

int restar1(int num1, int num2){
	int resta;
	resta = num1 - num2;
	return resta;
}
int restar2(void){
	int num1, num2, resta;
	
	printf("\ningrese primer numero: ");
	scanf("%d",&num1);
	printf("\ningrese segundo numero: ");
	scanf("%d",&num2);
	
	resta = num1 - num2;
	
	return resta;
}
void restar3(int num1, int num2){
	int resta;
	
	resta = num1 - num2;
	printf("\nel tercer resultado es %d",resta);
}
void restar4(void){
	int num1, num2, resta;
	
	printf("\ningrese primer numero: ");
	scanf("%d",&num1);
	printf("\ningrese segundo numero: ");
	scanf("%d",&num2);
	
	resta = num1 - num2;	
	printf("\nel cuarto resultado es %d",resta);
}







