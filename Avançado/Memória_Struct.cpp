#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct Aluno { 
	int id;
	char nome [50];
	char email [30];
	float media_final;
	};

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i;
	struct Aluno *a;
	
	a = (Aluno*) malloc (2 * sizeof (struct Aluno));

		for(i = 0; i < 2; i++){
        printf("Insira o id: ");
        scanf("%d", &a[i].id);
        getchar();
        printf("Insira o nome: ");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
		printf("Insira o email: ");
		fgets(a[i].email, sizeof(a[i].email), stdin);
		printf("Insira a media final: ");
		scanf("%f", &a[i].media_final);
		getchar();
		printf("\n");
	}
	
	free(a);

	return 0;
}
