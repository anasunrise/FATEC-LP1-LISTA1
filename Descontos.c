#include<stdio.h>
main(){
	int tc;
	float pf, pc;
	
	printf("Insira o valor da compra: ");
	scanf("%f", &pc);
	
	printf("\nQual tipo de desconto?\n\n");
	printf("|   Codigo    |   Cliente   |   Desconto  |\n");
	printf("|      1      |    Comum    |      -      |\n");
	printf("|      2      | Funcionario |    10 p/c   |\n");
	printf("|      3      |     VIP     |     5 p/c   |\n\n");
	scanf("%d", &tc);
	
	switch(tc){
		case 1:
			printf("\nPreço final: %.2f", pc);
		break;
		
		case 2:
			pf=pc-(pc*0.1);
			printf("\nPreço final: %.2f", pf);
		break;
		
		case 3:
			pf=pc-(pc*0.05);
			printf("\nPreço final: %.2f", pf);
			break;
			
		default:
		printf("\nCodigo invalido.");
	}
}
