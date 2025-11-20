#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int n, i;
	
	printf("Quantos numeros quer inserir? ");
	scanf("%d", &n);
	
	int numero[n]; // o n tem de ser declaro depois de saber o tamanho do mesmo
	
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d", &numero[i]);
	}
	
	for(i=n-1;i>=0;i--){
		printf("O numero do indice %d: %d\n", i, numero[i]);
		
	}
	
	return 0;
}
