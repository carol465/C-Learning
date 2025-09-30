#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2, mult, soma;
	
	printf("Escreva o pimeiro número inteiro: ");
	scanf("%d", &num1);
	
	printf("Escreva o segundo número inteiro: ");
	scanf("%d", &num2);
	
	mult = num1 * num2;
	soma = num1 + num2;
	
	if(mult>1000){
		printf("A soma dos dois números é: %d", soma);
	}
	if(mult<=1000){
		printf("A multiplicação dos números é igual  ou menor a 1000");
	}
	
	return 0;
}
