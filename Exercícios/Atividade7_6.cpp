#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

	
    char string[100];
    int i; 

    printf("Insira uma frase: ");
    

    fgets(string, sizeof(string), stdin); 


    size_t len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }

    printf("\nString Original: \"%s\"\n",string);


    for (i = 0; string[i] != '\0'; i++) {

        string[i] = tolower(string[i]);
    }

    printf("String em Minusculas: \"%s\"\n", string);

    return 0;
}

