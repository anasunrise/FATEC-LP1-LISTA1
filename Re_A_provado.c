#include<stdio.h>
main(){
	float n1, n2, med;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	printf("\nInsira a segunda nota: ");
	scanf("%f", &n2);
	
	med=(n1+n2)/2;
	
	if(med<6 && med>=0){
		printf("\nAluno reprovado com media %.2f", med);
	}else if(med>=6 && med<10){
		printf("\nAluno aprovado com media %.2f", med);
	}else{
		printf("\nInformacoes invalidas.");
	}
}
