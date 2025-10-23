#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	printf("--- Insira 5 nomes ---\n\n");
	
	int i;
	char matriz[5][20];

	for (i = 0; i < 5; i++){
		printf("Insira o nome: \n");
		fgets(matriz[i],20,stdin);
		}
	
	for(i = 0; i < 5; i++){
        printf("Nome: %s\n", matriz[i]);
    }

	return 0;
}


