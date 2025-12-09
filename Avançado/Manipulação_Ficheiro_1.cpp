#include <stdio.h>
#include <string.h>

int main(){

	setlocale (LC_ALL, "Portuguese");

    FILE *fp;
    const char *frase = "Manipulação de ficheiros em c\n";
    int i;

    fp = fopen("saida.txt", "w"); 

    if (fp == NULL) {
        perror("Erro ao abrir o ficheiro 'saida.txt'");
        return;
    }


    for (i = 0; i < strlen(frase); i++) {
        fputc(frase[i], fp);
    }


    fclose(fp);

	return 0;
}
