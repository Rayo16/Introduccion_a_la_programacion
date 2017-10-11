#include<stdio.h>
#include<stdlib.h>
#define TAM 10
float Arriba[TAM]={11}, Abajo[TAM], Numeros[TAM], prom=0, suma=0;
int i;
main(){
printf("Programa que pide al usuario introducir 10 calificaciones de 0 a 10 \ncon o sin decimales y entrega el promedio y separa las calificaciones \nen las que estan por encima, por debajo e igual al promedio");
printf("\n\nIntroduzca las 10 de 0 a 10 calificaciones por favor\n");
for (i=0;i<=TAM-1;i++){
  scanf("\n%f",& Numeros[i]);
}
printf("\n\nLas calificaciones son:\t");
for (i=0;i<=TAM-1;i++){
    printf("%.2f\t",Numeros[i]);
}
printf("\n");
for (i=0;i<=TAM-1;i++){
   suma=Numeros[i]+suma;
}
prom= suma/(TAM);
printf("\nEl promedio es: %.2f",prom);
for (i=0;i<=TAM-1;i++){
    if (Numeros[i]<prom){
   Abajo[i]=Numeros[i];
   Arriba[i]=100;
    }
    else if (Numeros[i]>prom){
    Arriba[i]=Numeros[i];
    Abajo[i]=100;
    }

}
printf("\nAbajo:\t");
for (i=0;i<=TAM-1;i++){
    if (Abajo[i]== Numeros[i])
    {printf("%.2f\t",Abajo[i]);}

}
printf("\nArriba:\t");
for (i=0;i<=TAM-1;i++){
    if (Arriba[i]==Numeros[i]){
    printf("%.2f\t",Arriba[i]);
    }

}
printf("\nIgual:\t");
for (i=0;i<=TAM-1;i++){
    if (Numeros[i]==prom)
    {printf("%.2f\t",Numeros[i]);
    }

}
getch();
return 0;
}
