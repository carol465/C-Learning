#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char str[100];
    int letras = 0;
    int digitos = 0;
    int especiais = 0;
    int i;


    printf("Insira uma string: ");

    fgets(str, sizeof(str), stdin); 


    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; 
    }

    for (i = 0; str[i] != '\0'; i++) {

        if (isalpha(str[i])) {
            letras++;
        } 

        else if (isdigit(str[i])) {
            digitos++;
        } 

        else {
 
            if (str[i] != '\0') { 
                especiais++;
            }
        }
    }

    printf("\n--- Resultados ---\n");
    printf("String Analisada: \"%s\"\n", str);
    printf("Total de Letras: %d\n", letras);
    printf("Total de Dígitos: %d\n", digitos);
    printf("Total de Caracteres Especiais: %d\n", especiais);
    printf("Comprimento Total da String: %zu\n", len);

    return 0;
}
