#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Cliente {
    char nome[20];
    char email[20];
};

void visualizar(struct Cliente c[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nNome: %s", c[i].nome);
        printf("Email: %s\n", c[i].email);
    }
}

int adicionar(struct Cliente c[], int n) {
    int quant, i;
    printf("Quantos clientes deseja adicionar? ");
    scanf("%d", &quant);
    getchar();

    for (i = 0; i < quant; i++) {
        printf("\nInsira o nome: ");
        fgets(c[n].nome, sizeof(c[n].nome), stdin);
        printf("Insira o email: ");
        fgets(c[n].email, sizeof(c[n].email), stdin);
        n++;
        printf("Cliente adicionado com sucesso!\n");
    }

    return n;
}

void editar(struct Cliente c[], int n) {
    char procurar_nome[50];
    int i, indice = -1;

    getchar();
    printf("Insira o nome do cliente que deseja editar: ");
    fgets(procurar_nome, sizeof(procurar_nome), stdin);

    for (i = 0; i < n; i++) {
        if (strcmp(c[i].nome, procurar_nome) == 0) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        printf("\nCliente encontrado:\n");
        printf("Nome atual: %s", c[indice].nome);
        printf("Email atual: %s", c[indice].email);

        printf("\nNovo nome: ");
        fgets(c[indice].nome, sizeof(c[indice].nome), stdin);
        printf("Novo email: ");
        fgets(c[indice].email, sizeof(c[indice].email), stdin);

        printf("Cliente editado com sucesso!\n");
    } else {
        printf("Cliente não encontrado.\n");
    }
}

int excluir(struct Cliente c[], int n) {
    char procurar_nome[50];
    int i, j, indice = -1;

    getchar(); 
    printf("Insira o nome do cliente que deseja excluir: ");
    fgets(procurar_nome, sizeof(procurar_nome), stdin);

    for (i = 0; i < n; i++) {
        if (strcmp(c[i].nome, procurar_nome) == 0) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        for (j = indice; j < n - 1; j++) {
            c[j] = c[j + 1];
        }
        n--;
        printf("Cliente excluído com sucesso!\n");
    } else {
        printf("Cliente não encontrado.\n");
    }

    return n;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n = 0, op;
    struct Cliente c[100];

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Adicionar Cliente\n");
        printf("2 - Visualizar Clientes\n");
        printf("3 - Editar Cliente\n");
        printf("4 - Excluir Cliente\n");
        printf("5 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                n = adicionar(c, n);
                break;
            case 2:
                visualizar(c, n);
                break;
            case 3:
                editar(c, n);
                break;
            case 4:
                n = excluir(c, n);
                break;
            case 5:
                printf("Fim do programa\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (op != 5);

    return 0;
}
