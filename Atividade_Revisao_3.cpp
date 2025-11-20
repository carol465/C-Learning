#include<stdio.h>
#include<locale.h>

int maior(int num[]){
	
	 int i, tamanho;
	 int m = num[0];
	 
	 tamanho = 0;
    
    for (i=0;i<tamanho;i++){
        if(num[i] > m){
            m = num[i];
        }
	}
	return m;
}

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i, n;
	
	printf("Quantos numeros vai inserir? ");
	scanf("%d", &n);
	
	int vetor[n];
	
	for(i = 0; i < n; i++){
		printf("Insira o numero: ");
		scanf("%d", &vetor[i]);
	}
	
	maior(vetor);
	
	printf("O maior numero: %d", maior(vetor));
	

	return 0;
}
