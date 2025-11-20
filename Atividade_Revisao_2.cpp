#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int digito(int n){
	return n%10;
}

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2, p1, p2;
	
	printf("\n--- Escreva dois numeros positivos ---\n\n");

	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);

	printf("Insira o segundo numero: ");
	scanf("%d", &num2);

	
	p1 = abs(num1);
	p2 = abs(num2);
	
	if(digito(p1) == digito(p2)){
		printf("\nOs numeros tem o ultimo digito igual");
	}
	else{
		printf("\nOs numeros não tem o ultimo digito igual");
	}

	return 0;
}

