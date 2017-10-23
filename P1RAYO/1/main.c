#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float res, x,y,a,b;
  printf("Este programa calcula el valor de la expresion ((x+y)^2)(a-b) ");
    printf("\n Ingrse x: ");
    scanf("%f",& x);
    printf("\n Ingrse y: ");
    scanf("%f",& y);
    printf("\n Ingrse a: ");
    scanf("%f", & a);
    printf("\n Ingrse b: ");
    scanf("%f", & b);
    res =((x+y)*(x+y))*(a-b);
    printf("\n El valor de la expresion ((x+y)^2)(a-b) es igual a: %.2f", res);
 getch();
  return 0;
}
