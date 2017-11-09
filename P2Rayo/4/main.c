#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int cant, prod=0, costo=0, i;
	system ("color 1F");
	printf("MENU : \n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n1.Hamburguesa chica con papas y refresco\t$20");
	printf("\n2.Hotdog y refresco\t\t\t\t$18\n3.Ensalada rusa\t\t\t\t\t$15\n");
printf("\nIngrese el número de productos que quiere: ");
scanf("%i",&cant);
for(i=1;i<=cant;i++){
	printf("\nIngrese el producto que quiere: ");
	scanf("%i",&prod);
	if(prod==1){
		costo+=20;
	} else if(prod==2){
		costo+=18;
	} else if(prod==3){
		costo+=15;
	}
}
printf("\nEl costo total de su consuimo es de %i pesos.",costo);
	getch();
	return 0;
}
