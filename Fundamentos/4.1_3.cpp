#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira um número inteiro: ");
	scanf("%d", &num);
	
	if(num%2==0 && num>15){
		printf("Numero %d par e maior que 15", num);
	}
	if(num%2==0 && num<=15){
		printf("Numero %d par e nao é maior que 15", num);
	}
	if(num%2==1 && num>50){
		printf("Numero %d impar e maior que 50", num);
	}
	if(num%2==1 && num<=50){
			printf("Numero %d impar e nao é maior que 50", num);
	}
	
	return 0;
}
