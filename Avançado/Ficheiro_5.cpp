#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i, vet[10];
	FILE *fich;
	fich = fopen ("aula.bin", "rb");
	fread(vet, sizeof (int), 10, fich);
	
	for(i = 0; i < 10; i++)
	printf("%d\n", vet[i]);
	
	fclose (fich);

	return 0;
}
