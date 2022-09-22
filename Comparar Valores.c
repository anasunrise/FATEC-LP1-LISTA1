#include<stdio.h>
main(){
	int a=0, b=0;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", & a);
	printf("\nInsira o segundo valor: ");
	scanf("%d", & b);
	
	if (a==b){
		printf("\nValores iguais.");
	}else{
		printf("\nValores diferentes.");
	}
}
