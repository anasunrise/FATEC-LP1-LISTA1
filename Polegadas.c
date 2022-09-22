#include<stdio.h>
main(){
	
	float p, con;
	
	printf("Insira um numero em polegadas: ");
	scanf("%f", & p);
	
	con=p*2.54;
	
	printf("Em centimetros: %.2f", con);
	
}
