#include <stdio.h>
#include <stdlib.h>
#define fijo 52.84
#define un 2.288
#define do 2.762
#define ad 3.042
int main(int argc, char *argv[]) {
	float kWh, costo;
	system("color 1F "); 
	printf("Programa calculador del monto a pagar por los kWh consumidos\nIngrese los kWh consumidos: ");
	scanf("%f",&kWh);
	if(kWh>=1 && kWh<=50){
		costo=un*kWh;
	}else if(kWh>=51 && kWh<=100){
		costo=(50*un)+((kWh-50)*do);
	}else if(kWh>100){
		costo=(50*un)+(50*do)+((kWh-100)*ad);
	}
	costo=costo+fijo;
	printf("\nEl total a pagar es %.2f", costo);
	getch();
	return 0;
}
