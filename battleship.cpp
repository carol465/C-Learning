#include <stdio.h>

#define MAX 10
#define MIN 3 
#define NAVIOS 3

int main() {
    int n;
    char tab1[MAX][MAX];
    char tab2[MAX][MAX];
    int i, j;
    int x, y;

    printf("=== BATALHA NAVAL ===\n");
    
    // DO-WHILE para escolha do tamanho do tabuleiro
   
    do {
        printf("Tamanho do tabuleiro (entre %d e %d): ", MIN, MAX);
        scanf("%d", &n);
        // Condição de validação
        if (n < MIN || n > MAX) {
            printf("Tamanho inválido. Escolha um valor entre %d e %d.\n", MIN, MAX);
        }
        
    } while (n < MIN || n > MAX); // Repete enquanto n for inválido
    // =======================================================


    // Inicializar os tabuleiros com água ('~')
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            tab1[i][j] = '~';
            tab2[i][j] = '~';
        }
    }

    // POSICIONAMENTO DOS NAVIOS - JOGADOR 1
    printf("\nJOGADOR 1 - Posiciona os teus %d navios:\n", NAVIOS);
    for (i = 0; i < NAVIOS; i++) {
        do {
            printf("Navio %d (linha coluna): ", i + 1);
            scanf("%d %d", &x, &y);
        } while (x < 0 || x >= n || y < 0 || y >= n || tab1[x][y] == 'N');

        tab1[x][y] = 'N';
    }

    // POSICIONAMENTO DOS NAVIOS - JOGADOR 2
    printf("\nJOGADOR 2 - Posiciona os teus %d navios:\n", NAVIOS);
    for (i = 0; i < NAVIOS; i++) {
        do {
            printf("Navio %d (linha coluna): ", i + 1);
            scanf("%d %d", &x, &y);
        } while (x < 0 || x >= n || y < 0 || y >= n || tab2[x][y] == 'N');

        tab2[x][y] = 'N';
    }

    // CICLO DO JOGO
    while (1) {
        // Jogador 1 ataca
        printf("\nJogador 1 - É a tua vez de atacar:\n");
        do {
            printf("Escolhe posição (linha coluna): ");
            scanf("%d %d", &x, &y);
        } while (x < 0 || x >= n || y < 0 || y >= n);

        while (tab2[x][y] == 'N') {
            printf("Acertou! Volta a Jogar.\n");
            tab2[x][y] = 'X';
             do {
            printf("Escolhe posição (linha coluna): ");
            scanf("%d %d", &x, &y);
            } while (x < 0 || x >= n || y < 0 || y >= n);
        }   

        if (tab2[x][y] == '~') {
            printf("-> Água\n");
            tab2[x][y] = 'O';
        } else {
            printf("-> Já foi atacado!\n");
        }

        // Verificar se o jogador 2 ainda tem navios
        int tem_navios2 = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (tab2[i][j] == 'N')
                    tem_navios2 = 1;

        if (!tem_navios2) {
            printf("\n Jogador 1 ganhou!\n");
            break;
        }

        // Jogador 2 ataca
        printf("\nJogador 2 - É a tua vez de atacar:\n");
        do {
            printf("Escolhe posição (linha coluna): ");
            scanf("%d %d", &x, &y);
        } while (x < 0 || x >= n || y < 0 || y >= n);

         while (tab1[x][y] == 'N') {
            printf("Acertou! Volta a Jogar.\n");
            tab2[x][y] = 'X';
             do {
            printf("Escolhe posição (linha coluna): ");
            scanf("%d %d", &x, &y);
            } while (x < 0 || x >= n || y < 0 || y >= n);
        } 

        if (tab1[x][y] == '~') {
            printf("-> Água\n");
            tab1[x][y] = 'O';
        } else {
            printf("-> Já foi atacado!\n");
        }

        // Verificar se o jogador 1 ainda tem navios
        int tem_navios1 = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (tab1[i][j] == 'N')
                    tem_navios1 = 1;

        if (!tem_navios1) {
            printf("\nJogador 2 ganhou!\n");
            break;
        }
    }

    return 0;
}