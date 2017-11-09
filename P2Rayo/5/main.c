#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	system("color 1f");
	int a,b,c;
	char var='0';
	printf("Programa que recibe dos enteros y un cáracter para hacer cálculos\n+ para sumar, - para restarlos, * para multiplicarlos y /para dividirlos y S o s para salir.");
	printf("\nIngrese el primer numero: ");
	scanf("%i",&a);
	printf("\nIngrese el segundo numero: ");
	scanf("%i",&b);
	printf("\nIngrese el operador: ");
	scanf("%c",& var);
	while (var!='S' || var!='s'){
		if(var=='+'){
		c=a+b;}
		else if(var=='-'){
		c=a-b;}
		else if(var=='*'){
		c=a*b;}
		else if(var=='/'){
		c=a/b;}
		
		printf("\nEl resultado de su operación es: %i",c);
		printf("\nSi desea salir presione S o s");
		scanf("%c",&var);
	}
	getch();
	return 0;
}
