  /*Pergunta: 
Crie um programa que responda aos seguintes requisitos:
a. Pretende-se guardar os dados dos jogadores de uma equipa (número,
nome, posição);
b. Pretende-se guardar todos os jogadores numa equipa que deverá
guardar igualmente o nome, cor do equipamento, posição no
campeonato);
c. Imprima todos os jogadores, mencionando a equipa a que pertencem.
d. Guarde os dados que imprimiu no ecrã num ficheiro binário. **/

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Equipa {
	char nome[20];
	char cor[20];
	char posicao_camp[20];	
};

struct Jogadora {
	int num;
    char nome[20];
    char posicao[20];
    struct Equipa *clube
};

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i, opcao;
	struct Equipa e[3];
	struct Jogadora j[2];
	char *ptr
	ptr = &e[3].nome;

	
	for(i = 0; i < 3; i++){
        printf("Insira o nome da equipa: ");
        fgets(e[i].nome, sizeof(e[i].nome), stdin);
        printf("Insira a cor: ");
        fgets(e[i].cor, sizeof(e[i].cor), stdin);
		printf("Insira a posição da equipa no campeonato: ");
		fgets(e[i].posicao_camp, sizeof(e[i].posicao_camp), stdin);
	} 
	
	for(i = 0; i < 2; i++){
        printf("Insira o seu número: ");
        scanf("%d", &j[i].num);
        getchar(); 
        printf("Insira o seu nome: ");
        fgets(j[i].nome, sizeof(j[i].nome), stdin);
        j[i].nome[strcspn(j[i].nome, "\n")] = 0;
        printf("Insira a sua posição: ");
        fgets(j[i].posicao, sizeof(j[i].posicao), stdin);
        printf("Selecione a equipa:\n");
        for(int k = 0; k < 3; k++) {
            printf("%d - %s\n", k, e[k].nome);
        }
        scanf("%d", &opcao);
        getchar();
        j[i].clube = &e[opcao]; 
    }
	
	for(i = 0; i < 2; i++){	
	printf("\nNúmero: %d\nNome: %s\nPosição: %s\nEquipa: %s\n",j[i].num,j[i].nome,j[i].posicao,j[i].clube;	
	}
	
	FILE *fp;
    char buffer[300];

    fp = fopen("jogadoras.bin", "wb");

    if (fp == NULL) {
        perror("Erro ao abrir o ficheiro 'jogadoras.bin' para leitura");
        return;
    }

    if (fgets(buffer, sizeof(buffer), fp) != NULL) {
        int lidos = sscanf(buffer, "%s", &j.num, j.nome, j.funcao);

        if (lidos == 3) {
            printf("\nDados das Jogadoras:\n");
            printf("Número: %d\n", j.num);
            printf("Nome: %s\n", j.nome);
            printf("Função: %s\n", j.posicao);
            printf("Equipa: %s\n", e[0].nome );
        } else {
             printf("Erro ao ler os dados da jogadora do ficheiro (formato incorreto).\n");
        }
    } else {
        printf("Erro ao ler o ficheiro 'jogadoras.bin' ou ficheiro vazio.\n");
    }
    
    fclose(fp);
	
	return 0:
		
	}	
	
	
