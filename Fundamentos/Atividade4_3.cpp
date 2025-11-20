#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Insira a terceura nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if(media>9.5){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}

	return 0;
}
