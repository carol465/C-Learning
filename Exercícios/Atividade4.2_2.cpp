#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i, num;
	
	printf("Insira um numero inteiro: ");
	scanf ("%d", &num);
	
	i = num%2;
	
	switch(i){
		case 0:
			printf("O numero é par");
			break;
		case 1:
			printf("O numero é impar");
			break;
	}

	return 0;
}
