#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	float t1, t2, resultado;
	
	printf("Insira uma temperatura em Celsius\n");
	scanf("%f", &t1);
	scanf("%f", &t2);
	
	resultado = ((t1 + t2)*1.8) + 32;
	
	printf("O resultado da conversão é %.2f", resultado);

	return 0;
}
