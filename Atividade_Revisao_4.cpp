#include<stdio.h>
#include<locale.h>
#include<string.h>

int igual(char vetor1[], char vetor2[]){

	int i, tamanho;
	
	for(i = 0; i < tamanho; i++){
			if(vetor1[tamanho] != vetor2[tamanho]){
				return 0;
			}
    		else if (vetor1[i] != vetor2[i]) {
    			return 0;
        	}
   			else{
    			return 1;
			}	
	}
}


int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int n;
	char frase1[n], frase2[n];
	
	printf("--- Escreva duas frases ---\n\n");
	
	printf("Quantas letras vai ter a sua frase? ");
	scanf("%d", &n);
	
	printf("\nInsira a primeira frase: ");
	fgets(frase1,n,stdin);
	
	printf("Insira a segunda frase: ");
	fgets(frase2,n,stdin);
	
	int resultado = igual(frase1, frase2, n);
		
	if(resultado == 1){
		puts("As frases sao iguais");
	}
	else{
		puts("As frases sao diferentes");
	}
	
	return 0;
}
