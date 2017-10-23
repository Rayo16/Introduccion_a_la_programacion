#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float grados;
	char letra;
	printf("Programa que convierte temperaturas de Celsius a Farenheit y viceversa dependiendo de lo que el usuario ingrese,\nusted debera ingresar un valor numerico y enseguida, sin espacios, una c o f deacuerdo a lo que el esta ingresando.\nEjemplo: Si se quieren convertir 30 grados Celsius a Farenheit, usted debera ingresar 30c");
	printf("\nIngrese los grados: ");
	scanf("%f%c", &grados, & letra);
	if(letra=='c' || letra=='C' ){
		grados=((9/5)*grados)+32;
		printf("\nEl equivalente son %.2f grados Farenheit", grados);
	}
	else if(letra=='f' || letra=='F') {
		grados=(grados-32)*5/9;
		printf("\nEl equivalente son %.2f grados Centigrados", grados);
	}
	
	getch();
	return 0;
}
