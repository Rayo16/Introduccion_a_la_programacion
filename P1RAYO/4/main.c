#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int st, h, m, s;
	printf("Programa que convierte un numero dado de segundos dados por el usuario a su equivalente en horas, minutos y segundos \n Ingrese los segundos: ");
	scanf("%i", & st);
	h=st/3600;
	m=(st%3600)/60;
	s=(st%3600)%60;
	if(h>0)
	printf("\nEl numero de horas es: %i", h);
	if(m>0)
	printf("\nEl numero de minutos es: %i", m);
	if(s>0)
	printf("\nEl numero de segundos es: %i", s);
	
	getch();
	return 0;
}
