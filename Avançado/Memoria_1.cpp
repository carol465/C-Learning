#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	char *nome;
	int i, j;
	
	nome = (char*) calloc(5 * 50, sizeof (char));
	
	for (i = 0; i < 5; i++)
		for(j = 0; j < 50; j++)
			nome[(50 *i) + j] = 0;	
	
	free(nome);

	return 0;
}
