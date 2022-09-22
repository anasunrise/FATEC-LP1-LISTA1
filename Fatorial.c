#include<stdio.h>
main(){
	
	int f=0, f2=1;
	
	printf("Insira o numero para ser fatorado: ");
	scanf("%d", & f);
	
	if(f==0){
		printf("Resultado: 1");
	}else{
		while(f>0){
			f2=f2*f;
			
			f--;
		}
	printf("Resultado: %d", f2);
	}

}
