#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	float nota, soma, media;
	int i, numero;
	
	printf("Numero de notas que vai inserir: ");
	scanf("%d", &numero);
    
    for(i=0;i<numero;i++){
    	printf("Insira a nota: ");
		scanf("%f", &nota);
		soma += nota;
		};
		
	media = soma/numero;
	printf("\nMedia das notas: %.2f", media);
    	
	if(media>9.5){
    	printf("\nAprovado");
	}
	else{
		printf("\nReprovado");
	}
    
	return 0;
}
