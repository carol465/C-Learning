#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int n;
	int *ptr;
	
	n = 18;
	ptr = &n;
	
	printf("\nProcesso Direto: %d", n);
	printf("\nProcesso Indireto: %d", *ptr);

	return 0;
}
