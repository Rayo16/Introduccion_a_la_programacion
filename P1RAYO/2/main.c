#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float ft, in, yard, cm, m;
    printf("Programa que convierte pies a pulgadas, yardas, centimetros y metros. \nIngrese el valor de pies:");
  scanf("%f", & ft);
  in= ft*12;
  yard=ft*1/3;
  cm= in*2.54;
  m=cm/100;
  printf("\n %.2f Pies es igual a:\n%.2f Pulgadas\n%.2f Yardas\n%.2f Centimetros y\n%.2f Metros", ft, in, yard, cm, m);
getch();
  return 0;
}
