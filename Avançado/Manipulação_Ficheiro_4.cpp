#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
    FILE *fp;
    Funcionario f_lido;
    char buffer[150];

    fp = fopen("funcionario.txt", "r");

    if (fp == NULL) {
        perror("Erro ao abrir o ficheiro 'funcionario.txt' para leitura");
        return;
    }

    if (fgets(buffer, sizeof(buffer), fp) != NULL) {
        int lidos = sscanf(buffer, "%d", 
                           &f_lido.codigo, f_lido.nome, f_lido.funcao);

        if (lidos == 3) {
            printf("\n4. Dados do funcionário lidos do ficheiro:\n");
            printf("   Código: %d\n", f_lido.codigo);
            printf("   Nome: %s\n", f_lido.nome);
            printf("   Função: %s\n", f_lido.funcao);
        } else {
             printf("4. Erro ao ler os dados do funcionário do ficheiro (formato incorreto).\n");
        }
    } else {
        printf("4. Erro ao ler o ficheiro 'funcionario.txt' ou ficheiro vazio.\n");
    }

    fclose(fp);

	return 0;
}
