#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
    FILE *fp;
    const char *linha = "É possível escrever uma linha completa de texto.\n";

    fp = fopen("saida.txt", "a");

    if (fp == NULL) {
        perror("Erro ao abrir o ficheiro 'saida.txt' para apêndice");
        return;
    }

    fprintf(fp, "%s", linha);

    fclose(fp);


	return 0;
}
