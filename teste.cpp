#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
		int num1, num2, num3;
	
	printf("Insira o primeiro numero inteiro: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero inteiro: ");
	scanf("%d", &num2);
	
	printf("Insira o terceiro numero inteiro: ");
	scanf("%d", &num3);
	
	
	if(num1==num2 && num2==num3){
		printf("Equilatero");
	}
	if(num1==num2 && num1!=num3 && num2!=num3){
		printf("Isosceles");
	}
	if(num1==num3 && num1!=num2 && num3!=num2){
		printf("Isosceles");
	}
	if(num2==num3 && num2!=num1 && num3!=num1){
		printf("Isosceles");
	}
	else{
		printf("Escaleno");
	}

	return 0;
}
