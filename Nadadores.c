#include<stdio.h>
main(){
	
	int id;
	
	printf("Insira a idade desejada: ");
	scanf("%d", &id);
	
	if (id>=5 && id<=7){
		printf("\nCategoria Infantil A.");
	}else if (id>=8 && id<=10){
		printf("\nCategoria Infatil B.");
	}else if (id>=11 && id<=13){
		printf("\nCategoria Juvenil A.");
	}else if (id>=14 && id<=17){
		printf("\nCategoria Juvenil B.");
	}else if (id>=18){
		printf("\nCategoria Adultos.");
	}else{
		printf("\nIdade invalida.");
	}
}
