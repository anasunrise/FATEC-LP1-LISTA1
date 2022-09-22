#include<stdio.h>
main (){
	
	float p, ma, c, mp=0;
	int i;
	
	for(i=1;i<=15;i++){
		printf("\nColoque o codigo do produto #%d: ", i);
		scanf("%f", & c);
		printf("Coloque o preço do produto: ");
		scanf("%f", & p);
		
		if(p>mp){
			mp=p;
		}
		
		ma=ma+p;
	}
	
	printf("A media aritmetica eh %.2f e o maior preco eh %.2f", ma/15, mp);
	
}
