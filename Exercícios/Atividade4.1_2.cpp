#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	float p, m, soma, valor1, valor2, desconto;
	
	printf("Quantidade de peras em Kg: ");
	scanf("%f", &p);
	
	printf("Quantidade de macas em Kg: ");
	scanf("%f", &m);
	
	soma = p + m;
	valor1 = 1.8 * p + 1.,9 * m;
	valor2= 1.6*p + 1.7*m
	
	if(soma<5 && valor>5){
		desconto = valor1 / 1.08;
		printf("Valor a pagar: %f", desconto);
	if(soma>5)
		printf("Valor a pagar: %f", valor2);
	}
	else{
		printf("Valor a pagar: %f", valor );
	}

	return 0;
}
