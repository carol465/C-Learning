#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i, count;
	char nome[20];
	
	printf("Insira o seu primeiro nome: ");
	scanf("%s", nome); // o scanf não aceita espaços
	
	while(nome[i]!='\0'){
		printf("%d - %c\n", i, nome[i]);
		count = i++;
	}
	
	printf("\nNumero de letras: %d\n", count+1);
	printf("O seu primeiro nome: %s.", nome);

	return 0;
}
