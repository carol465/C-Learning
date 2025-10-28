#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int n, i, maior, menor, temp;
	
	printf("Quantos numeros quer inserir? ");
	scanf("%d", &n);
	
	int numero[n]; // o n tem de ser declaro depois de saber o tamanho do mesmo
	
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d", &numero[i]);
	}
	
	maior = menor = numero[0];
	
	for(i=0;i<n;i++){
		if(numero[i]>maior){
			maior = numero[i];
		}
		if(numero[i]<menor){
			menor = numero[i];
		}
	}
	
	printf("O maior numero: %d\nO menor numero: %d", maior, menor);
	
	
	return 0;
}

