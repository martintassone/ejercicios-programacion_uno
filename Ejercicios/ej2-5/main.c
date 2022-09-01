#include <stdio.h>
#include <stdlib.h>

//Martin Tassone
//Ejercici 2-5

int main(int argc, char *argv[]) {
	
	int legajo, edad, ingreso;
	int contadorEdad, contador, presupuestoTotal, ingresoM, edadM, legajoM, bandera, descuento, banderaDos;
	char estadoCivil, genero, respuesta;
	
	contadorEdad = 0;
	contador = 0;
	bandera = 0;
	banderaDos = 0;
	
	do{
		printf("Ingrese numero de legajo: ");
		scanf("%d",&legajo);
		while(legajo<1000||legajo>9999){
			printf("Reingrese legajo: ");
			scanf("%d",&legajo);
		}
		printf("Estado civil: ");
		fflush(stdin);
		scanf("%c",&estadoCivil);
		while(estadoCivil != 'c' && estadoCivil != 's' && estadoCivil != 'v'){
			printf("Reingrese estado civil: ");
			fflush(stdin);
			scanf("%c",&estadoCivil);
		}
		printf("Ingrese edad: ");
		scanf("%d",&edad);
		while(edad<18){
			printf("Reingrese edad: ");
			scanf("%d",&edad);
		}
		if(edad>60){
			contadorEdad++;
		}
		printf("Año de ingreso: ");
		scanf("%d",&ingreso);
		while(ingreso<2000||ingreso>2022){
			printf("Reingrese año de ingreso: ");
			scanf("%d",&ingreso);
		}
		printf("Genero: ");
		fflush(stdin);
		scanf("%c",&genero);
		while(genero!='f'&&genero!='m'&&genero!='o'){
			printf("Reingrese genero: ");
			fflush(stdin);
			scanf("%c",&genero);
		}
		if(genero=='f'){
			if(bandera==0||ingreso<ingresoM){
				legajoM = legajo;
				edadM = edad;
				bandera = 1;
			}	
		}
		contador++;
		printf("Desea ingresar otra persona? S/N ");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta!='n');
	
	presupuestoTotal = contador * 450;
	
	if(contador>5&&contador<10){
		descuento = (5*presupuestoTotal)/100;
		banderaDos = 1;
	}
	if(contador>10){
		descuento = (10*presupuestoTotal)/100;
		banderaDos = 1;
	}
	
	printf("La cantidad de gente mayor a 60 es: %d",contadorEdad);
	printf("\nEl legajo y edad de la mujer que ingreso hace mas tiempo son: %d y %d",legajoM,edadM);
	printf("\nEl presupuesto total sera de: %d",presupuestoTotal);
	if(banderaDos==1){
		printf("\nSe aplica un descuento de: %d",descuento);
	}else{
		printf("\nNo se aplican descuentos");
	}
	
	return 0;
}
