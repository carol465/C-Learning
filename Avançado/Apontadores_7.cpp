#include <stdio.h>
#include <locale.h>

int comprimento(const char *str) {

    const char *p = str;
    while (*p != '\0') {
        p++; 
    }
    
    return (int)(p - str);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char string[] = "Ola!";
    int tamanho;
    
    printf("--- CALCULAR COMPRIMENTO DE STRING ---\n");
    
    printf("String: \"%s\"\n", string);
    
    tamanho = comprimento(string);
    
    printf("Comprimento da string: %d caracteres\n", tamanho);
    
    return 0;
}
