#include<stdio.h>
#include<locale.h>

int intervalo(int n){
	if(n>=20 && n<=50){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2, num3;
	char r1, r2, r3;
	
	printf("\n--- Escreva tres numeros de 20 a 50 ---\n\n");

	

	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);

	printf("Insira o segundo numero: ");
	scanf("%d", &num2);

	printf("Insira o terceiro numero: ");
	scanf("%d", &num3);

	
	r1 = intervalo(num1);
	r2 = intervalo(num2);
	r3 = intervalo(num3);
	
	if(r1 == true && r2 == true && r3 == true){
		printf("\nVerdadeiro: %d, %d e %d", num1, num2, num3);
	}
	else{
		printf("\nFalso");
	}

	return 0;
}
