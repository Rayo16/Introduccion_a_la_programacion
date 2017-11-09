#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	char no[3]="No", aprob[9]="Aprobado";
	float i=0, suma=0, calif, prom;
	system("color 9f ");
	printf("Programa que calcula el promedio de un alumno y sus 5 calificaciones e indica si esta aprobado o reprobado");
while(i<5){
		printf("\nIngrese la calificacion %.0f: ",i+1);
		scanf("%f",&calif);
		suma=suma+calif;
		i++;
	}
	prom=suma/(i);
	if(prom>=6){
		printf("\nEl promedio es %.2f y el alumno esta %s",prom,aprob);
	}else{
		printf("\nEl promedio es %.2f y el alumno %s esta %s",prom,no, aprob);
	}
	getch();
	return 0;
}
