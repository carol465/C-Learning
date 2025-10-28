#include<stdio.h>
#include<locale.h>

struct Pessoa {
	char nome[20];
	char morada[50];
	int telefone;
	int idade;
};

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i;
	struct Pessoa p[2];
	
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
