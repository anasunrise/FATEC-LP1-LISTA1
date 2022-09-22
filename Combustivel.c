#include<stdio.h>
main(){
	
	float qntl, pf;
	int comb;
	
	printf("Insira a quantidade de litros: ");
	scanf("%f", &qntl);
	printf("\n  Qual tipo de combustivel?\n");
	printf("-------------------------------\n");
	printf("|   Codigo    |   Combustivel |\n");
	printf("|      1      |     Alcool    |\n");
	printf("|      2      |    Gasolina   |\n");
	printf("-------------------------------\n");
	scanf("%d", &comb);
	
	switch(comb){
		case 1:
			if (qntl<=20){
				pf=qntl*(2.90*0.97);
				printf("\nValor final: %.2f", pf);
			}else{
				pf=qntl*(2.90*0.95);
				printf("\nValor final: %.2f", pf);
			}
		break;
		case 2:
			if (qntl<=20){
				pf=qntl*(3.30*0.96);
				printf("\nValor final: %.2f", pf);
			}else{
				pf=qntl*(3.30*0.94);
				printf("\nValor final: %.2f", pf);
			}
		break;
		
		default:
			printf("Codigo invalido.");
	}
}
