#include <stdio.h>
#include <stdlib.h>



int main() {
	float x=0, y=0;
	printf("Programa que calcula para f(x)=(x*x)-x para x<=0 y -(x*x)+3x para x>0)");
	printf("\nIngrese x:\n");
	scanf("%f",&x);
	if(x<=0){
		printf("\nf(x)=(x*x)-x");
		y=(x*x)-x;
		}else{
		printf("\nf(x)=-(x*x)+3x");
		y=(-1*(x*x))+(3*x);
		}
	printf("\nf(x)= %.2f",y);
	getch();
	return 0;
}
