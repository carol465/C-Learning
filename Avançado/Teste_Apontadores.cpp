#include <stdio.h>
#include <locale.h>

void mostraVetor(char *ptr)
{
    for(int i = 0; i < 10; i++)
        printf("%c",*(ptr + i));
}

int main()
{
    setlocale (LC_ALL, "Portuguese");
    char v[10] = "Carolina";
   
    mostraVetor(v);
       
    return 0;
}
