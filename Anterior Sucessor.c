#include<stdio.h>
main (){
	int val, ant, pf;
	
	printf("insira o valor desejado: ");
	scanf("%d", & val);
	
	ant=val-1;
	pf=val+1;
	
	printf("\n%d \n%d \n%d", ant, val, pf);
}
