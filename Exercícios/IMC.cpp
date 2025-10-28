#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	float p, a, IMC;
	
	printf("Insira o seu peso em kg: ");
	scanf("%f", &p);
	printf("Insira a sua altura em m: "); /* colocar o valor com vírgula e não ponto */
	scanf("%f", &a);
	
	IMC = p/(a*a);
	
	printf("O seu IMC é de: %.2f ", IMC);

	return 0;
}
