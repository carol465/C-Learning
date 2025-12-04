#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int dia, mes, ano;
	
	FILE * fich;
	fich = fopen ("aulas.txt", "r");
	fscanf(fich, "%d/%d/%d", &dia, &mes, &ano);
	printf("%d/%d/%d", dia, mes, ano);
	fclose(fich);

	return 0;
}
