#include<stdio.h>
#include<locale.h>

typedef struct {
    int codigo;
    char nome[50];
    char funcao[50];
} Funcionario;

int main(){

	setlocale (LC_ALL, "Portuguese");

    FILE *fp;
    Funcionario f1 = {101, "Carolina Pereira", "Desenvolvedor"};

    fp = fopen("funcionario.txt", "w");

    if (fp == NULL) {
        perror("Erro ao abrir o ficheiro 'funcionario.txt'");
        return;
    }

    fprintf(fp, "%d, %s, %s\n", f1.codigo, f1.nome, f1.funcao);

    fclose(fp);

	return 0;
}
