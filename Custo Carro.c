#include<stdio.h>
main(){
	float vf=0, cf=0;
	
	printf("Digite o custo de fabrica: ");
	scanf("%f", &cf);
	
	vf=cf+((0.28*cf)+(0.45*cf));
	
	printf("\nCusto final %.2f", vf);
}
