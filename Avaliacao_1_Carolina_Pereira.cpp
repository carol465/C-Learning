#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int v1, v2, v3, soma;
	float media;
	
	printf("--- Insira os 3 valores de vendas ---\n\n");
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &v2);
	
	printf("Insira o terceiro valor: ");
	scanf("%d", &v3);
	
	soma = v1 + v2 + v3;
	media = soma/3;
	
	printf("\nMedia: %.1f\n", media);
	
	if(media > 100){
		printf("Objetivo Ultrapassado");
	}
	if(media == 100){
		printf("Objetivo Atingido");
	}
	else{
		printf("Objetivo nao Atingido");
	}

	return 0;
}
