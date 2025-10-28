#include<stdio.h>
#include<locale.h>
#include <string.h>
#include <ctype.h>

char inverter(char c) {

    if (isalpha(c)) {

        if (islower(c)) {

            return toupper(c);
        }
        else if (isupper(c)) {
        	
            return tolower(c);
        }
    }

    return c;
}

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	char letra;
	
	printf("Escreva uma letra: ");
	letra = getc(stdin);
	
    char resultado = inverter(letra);
    printf("Inserido: '%c'\n", letra);
    printf("Resultado: '%c'\n", resultado);


    return 0;
}
