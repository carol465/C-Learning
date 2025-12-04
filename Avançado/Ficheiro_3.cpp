#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	FILE * fich;
	int vet[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	fich = fopen ("aula.bin", "wb");
	fwrite(vet, sizeof(int), 10, fich);
	fclose(fich);

	return 0;
}
