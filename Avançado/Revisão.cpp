#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

	setlocale (LC_ALL, "Portuguese");

    FILE *fp;
    const char *texto = "Manipulação de ficheiros em C.\nO motivo pelo qual se torna fundamental a utilização de ficheiros resulta da necessidade de perpetuar os dados para além do ciclo de vida de um programa.\nIsto significa que os dados armazenados nas variáveis criadas pela execução do programa, residentes na memória principal que, como se sabe, é de natureza volátil, apenas se encontram disponíveis enquanto o programa está em execução. Este facto representa uma clara limitação à longevidade dos dados que, em última instância, ficam dependentes de termos o nosso programa em execução vinte e quatro horas por dia, pois caso o programa seja terminado ou o computador desligado tudo voltará ao ponto de partida.\nUma solução possível consiste na utilização de ficheiros, que pelo facto de serem armazenados em suportes secundários, não ficam dependentes do programa estar em execução ou de termos o nosso equipamento ligado.\nEm termos de tipos de ficheiros, e uma vez que vamos abordar os modos texto/binários, vamos considerar duas grandes áreas:\n";

    fp = fopen("documento.txt", "a");

    if (fp == NULL) {
        printf("Erro ao abrir o ficheiro 'documento.txt' para leitura");
        return 1;
    }
    
    fprintf(fp, "%s", texto);

    fclose(fp);

	return 0;
}
