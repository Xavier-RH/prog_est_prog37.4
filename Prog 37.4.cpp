/* Autor: Xavier Romero Hernández, Realizado: 10/03/2022 
	Tomando como base el programa anterior, modificarlo para que use una función del tipo void que pida, 
	calcule e imprima el área de la figura y esta sea llamada desde el programa principal las veces que se requiera
*/
	
#include <stdio.h>
#include <math.h>

void calcularareasector();

int main(){
	int a;
	
	printf("Calculo de area de un sector circular\n");
	do{	
		calcularareasector();
		printf("¿Desea calcular el area de otro sector circular? (1.-Si, 2.-No): ");
		scanf("%d",&a);
	}while(a!=2);
	
	return 0;
}

void calcularareasector(){
	float radio, angulo, area;
	do{
			printf("\nIngrese el radio del circulo: ");
			scanf("%f",&radio);
			if(radio<=0){
				printf("\nValor no valido, ingrese un valor mayor a 0\n");
		}
		}while(radio<=0);
		do{
			printf("Ingrese el angulo del sector a calcular: ");
			scanf("%f",&angulo);
			if(angulo<=0){
				printf("\nValor no valido, ingrese un valor mayor a 0\n\n");
			}
		}while(angulo<=0);
		
		area=((M_PI*pow(radio,2))/360)*angulo;
	
		printf("\nEl area del sector circular es de %.2f u2\n\n",area);
}
