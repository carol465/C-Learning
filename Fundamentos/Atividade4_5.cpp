#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2, num3, maior;
	
	printf("Insira o primeiro numero inteiro: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero inteiro: ");
	scanf("%d", &num2);
	
	printf("Insira o terceiro numero inteiro: ");
	scanf("%d", &num3);
	
	
	maior = num1;
	
	if(num2>num1){
		maior = num2;
	}
	if(num3>num2){
		maior = num3;
	}

	printf("Maior número: %d\n ", maior);

	return 0;
}
