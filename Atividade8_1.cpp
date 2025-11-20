#include<stdio.h>
#include<locale.h>
#include <string.h>

int par(int n1){
	return n1%2;
}

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num;
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	if (par(num) == 0){
		printf("Numero par: %d", par(num));
	}
	else if (par(num) == 1){
		printf("Numero impar: %d", par(num));
	}

	return 0;
}
