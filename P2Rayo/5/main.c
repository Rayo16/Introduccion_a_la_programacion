#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	system("color 1f");
	int a,b,c;
	char var=0;
	printf("Programa que recibe dos enteros y un cáracter para hacer cálculos\n+ para sumar, - para restarlos, * para multiplicarlos y /para dividirlos y S o s para salir.");
	printf("\nIngrese el primer numero: ");
	scanf("%i",& a);
	printf("\nIngrese el segundo numero: ");
	scanf("%i",&b);
	printf("\nIngrese el operador: ");
	scanf("%s",& var);
	do{
		if(var == '+'){
		c=a+b;
		printf("\nEl resultado de su operacion es: %i",c);}
		else if(var=='-'){
		c=a-b;
		printf("\nEl resultado de su operacion es: %i",c);}
		else if(var=='*'){
		c=a*b;
		printf("\nEl resultado de su operacion es: %i",c);}
		else if(var=='/'){
		c=a/b;
		printf("\nEl resultado de su operacion es: %i",c);}
		else{
				printf("\nOperacion no valida");
		}
		
		
		printf("\nSi desea salir presione S o s: ");
		scanf("%s",&var);
	}while (var!='S' || var!='s');
	getch();
	return 0;
}
