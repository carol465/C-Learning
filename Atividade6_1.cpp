#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int numeros[10], numero, count, soma, i;
	float media;
	
	soma = 0;
	
	for(i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
		soma = soma + numeros[i];
		count ++;
	}
	
	media = soma/count;
	
	printf("A media dos numeros: %.2f", media);
	
	return 0;
}
