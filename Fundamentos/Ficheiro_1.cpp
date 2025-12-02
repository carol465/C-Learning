#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	FILE * fich;
	
	fich = fopen("texto.txt", "w");
	
	if (fich == NULL) {
        printf("Erro: O ficheiro 'texto.txt' nao foi encontrado.\n");
    return 1; 
    }
    
    printf("Ficheiro 'texto.txt' aberto com sucesso. \n");
    
    fclose(fich);
    printf("Ficheiro fechado com sucesso.\n");

	return 0;
}


