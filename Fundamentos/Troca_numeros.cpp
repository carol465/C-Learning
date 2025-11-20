#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2, temp;
	
	printf("Insira o primeiro número: ");
	scanf("%d", &num1);
	printf("Insira o segundo número: ");
	scanf("%d", &num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp; /* x=y, y=z, z=x */
	
	printf("Resultado da troca: %d, %d", num1, num2);

	return 0;
}
