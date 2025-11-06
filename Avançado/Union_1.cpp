#include<stdio.h>
#include<locale.h>

/* In Union the size is determined by the size of the largest member. Only one member can hold a valid value at any given time.
Use when you need to store one of several possible data types in the same memory space to save memory 
(e.g., a variable that can be an int, float, or char, but never all at once). */

union Pessoa {
	char nome[20];
	char morada[50];
	int telefone;
	int idade;
};

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i;
	union Pessoa p[2];
	
	for(i = 0; i < 2; i++){
        printf("Insira o seu nome: ");
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        printf("Insira a sua morada: ");
        fgets(p[i].morada, sizeof(p[i].morada), stdin);
		printf("Insira o seu numero de telefone: ");
		scanf("%d", &p[i].telefone);
		getchar();
		printf("Insira a sua idade: ");
		scanf("%d", &p[i].idade);
		getchar();
	}

	for(i = 0; i < 2; i++){	
	printf("\nNome: %s\nMorada: %s\nTelefone: %d\nIdade: %d\n",p[i].nome,p[i].morada,p[i].telefone,p[i].idade);	
	}

	return 0;
}
