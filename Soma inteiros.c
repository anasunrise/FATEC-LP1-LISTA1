#include<stdio.h>
main (){
	
	int a=0, b=0, i=0, r=0;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", & a);
	printf("Insira o segundo valor: ");
	scanf("%d", & b);
	
	for(i=a;i<=b;i++){
		r=r+i;
	}
	
	printf("A soma eh igual a: %d", r);
}
