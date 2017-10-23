#include <stdio.h>
#include <stdlib.h>
#define g 9.8
#define pi 3.14


int main(int argc, char *argv[]) {
	float v,d, p,  aod;
	printf("Programa disenado para calcular el volumen de un liquido ( agua o diesel ) en un pozo cilindrico sabiendo su diametro y calculando la altura de este con la presion que el liquido ejerce al fondo del pozo");
	printf("\nEscriba 1 si el liquido es agua o 2 si es diesel: ");
	scanf("%f", & aod);
	printf("\nIngrese el valor de la presion (en bar) que ejerce el liquido al fondo del pozo: ");
	scanf("%f", & p);
	printf("\nIngrese el diametro del pozo en metros: ");
	scanf("%f", & d);
	v= aod==1? (pi*d*d/4)*(p/(1000*g)): (pi*d*d/4)*(p/(820*g));
	printf("\nEl volumen del liquido son %.2f metros cubicos", v);
	getch();
	return 0;
}
