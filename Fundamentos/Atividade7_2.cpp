#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	char nome1[20], nome2[20], apelido1[20], apelido2[20];
	int i;

	
	printf("Insira o primeiro nome da primeira pessoa: ");
	fgets(nome1,20,stdin);
	printf("Insira o apelido da primeira pessoa: ");
	fgets(apelido1,20,stdin);
	printf("Insira o primeiro nome da segunda pessoa: ");
	fgets(nome2,20,stdin);
	printf("Insira o apelido da segunda pessoa: ");
	fgets(apelido2,20,stdin);
	
			for(int i = 0; i < strlen(apelido1); i++)
    {
        if(apelido1[i] == '\n')
        {
            apelido1[i] = '\0';
            break;
        }
    }
    
    		for(int i = 0; i < strlen(apelido2); i++)
    {
        if(apelido2[i] == '\n')
        {
            apelido2[i] = '\0';
            break;
        }
    }
	
	strcat(apelido1, " ");
	strcat(apelido1, nome1);
    
    strcat(apelido2, " ");
	strcat(apelido2, nome2);
	
	
	printf("Nome da primeira pessoa: ");
	puts(apelido1);
	printf("Comprimento: %zu\n", strlen(apelido1));
	printf("Nome da segunda pessoa: ");
	puts(apelido2);
	printf("Comprimento: %zu\n", strlen(apelido2));

	return 0;
}
