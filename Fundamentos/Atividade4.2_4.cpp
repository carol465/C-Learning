#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
    int num1, num2;
    int n;
    float media, sub, mult, div;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    
    
    media = (num1 + num2) / 2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("Selecione uma operacao:\n");
    printf("1. Media\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("Escolha a opcao: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("A media e %2.f\n", media);
            break;
        case 2:
            printf("A subtracao e %2.f\n", sub);
            break;
        case 3:
            printf("A multiplicacao e %2.f\n", mult);
            break;
        case 4:
            printf("A divisao e %2.f\n", div);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
