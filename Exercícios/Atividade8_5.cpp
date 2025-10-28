#include<stdio.h>
#include<locale.h>
#include <string.h>
#include <ctype.h>

void maiuscula(char p[]){
	
	int i;

	for (i = 0; p[i] != '\0'; i++){
		p[i] = toupper(p[i]);
	}

}

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	char palavra[30];
	
	printf("Escreva uma palavra: ");
	fgets(palavra, 30, stdin);
	
	// como não posso ter uma função dentro de outra função:
	maiuscula(palavra);
	
	printf("A palavra em maiusculas: %s", palavra);

	return 0;
}
