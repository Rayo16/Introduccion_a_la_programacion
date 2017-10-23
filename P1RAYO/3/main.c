#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main(int argc, char *argv[]) {
	float a, v, h, r, g;
	printf("Programa que calcula el area y volumen de un cono dados su radio y altura por el usuario\n Ingrese el radio: ");
	scanf("%f", &r);
	printf("\n Ingrese la altura: ");
	scanf("%f", &h);
	g=sqrt((r*r)+(h*h));
	a=(PI*r)*(g+r);
	v=(PI*r*r*h)/3;	
	printf("\n El area del cono es : %.2f y el volumen: %.2f",a,v);
	getch();
	return 0;
}
