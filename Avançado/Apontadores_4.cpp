#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int m = 29;
	int *ab;
	
	printf("endereco de m = %p\n", &m);
	printf("valor de m = %d\n\n", m);
	
	printf("agora ab e atribuido com o endereco ab\n");
	
	ab = &m;
	
	printf("endereco do ponteiro ab = %p\n", &ab);
	printf("conteudo apontado por ab = %d\n\n", *ab);
	
	printf("agora o valor atribuido a m e 34\n");

	m = 34;
	
	printf("endereco do ponteiro ab = %p\n", &ab);
	printf("conteudo apontado por ab = %d\n\n", *ab);
	
	printf("variavel apontada por ab agora recebe valor 7\n");
	
	*ab = 7;
	
	printf("endereco de m = %p\n", &m);
	printf("valor de m = %d\n", m);
	
	return 0;
}