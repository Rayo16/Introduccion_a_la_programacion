#include <stdio.h>
#include <stdlib.h>
#define TAM 10
main(){
    float Arreglo[TAM],var;
    int i,j;
printf("Introduzca 10 numeros con o sin decimales positivos\n");
for(i=0;i<=TAM-1;i++){
    scanf("\n%f",& Arreglo[i]);
}
printf("\n Los numeros son:");
for(i=0;i<=TAM-1;i++){
    printf("\t%.2f", Arreglo[i]);
}
for (i=8;i>=0;i--){
for (j=0;j<=i;j++){
    if(Arreglo[j]>Arreglo[j+1]){
    var=Arreglo[j];
    Arreglo[j]=Arreglo[j+1];
    Arreglo[j+1]=var;
    }

}
}
printf("\n\nEl orden de los numeros de menor a mayor es:\n");
for(i=0;i<=TAM-1;i++){
    printf("\t%.2f", Arreglo[i]);
}

getch();
return 0;
}
