#include<stdio.h>
main(){
	
	float alt1=1.50, alt2=1.10;
	int ta=0;
	
	while(alt1>alt2){
		alt1=alt1+0.02;
		alt2=alt2+0.03;
		
		ta++;
	}
	
	printf("%d", ta);

}
