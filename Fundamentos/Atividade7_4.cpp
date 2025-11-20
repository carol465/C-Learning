#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	char a;
	
	printf("Insira uma letra: ");
	a = getc(stdin);
	a = toupper(a);
	
	putc(a, stdout);

	return 0;
}
