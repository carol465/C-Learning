#include <stdio.h>
#include <string.h>

int main() {

    char str1[50] = "Conteudo1";
    char str2[50] = "Conteudo2";
    char temp[50]; 

    printf("Antes da Troca\n");
    printf("str1: \"%s\"\n", str1);
    printf("str2: \"%s\"\n", str2);


    strcpy(temp, str1);


    strcpy(str1, str2);

 
    strcpy(str2, temp);

    printf("Depois da Troca\n");
    printf("str1: \"%s\"\n", str1); 
    printf("str2: \"%s\"\n", str2); 

    return 0;
}