#include<stdio.h>
main(){
	float mud, ud;
	int qntm;
	
	printf("Escreva o numero de macas desejadas: ");
	scanf("%d", &qntm);
	
	if(qntm<12){
		mud=qntm*1.30;
		
		printf("\nValor final igual a: %.2f", mud);
	}else{
		ud=qntm*1;
		
		printf("\nValor final igual a: %.2f", ud);
	}
	
}
