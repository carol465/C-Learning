#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");

	int n, i, mult;
	
	printf("Insira um numero para a tabuada: ");
	scanf("%d", &n);
	
	
	for(i=1;i<11;i++){
		mult = n * i;
		printf("\n%d * %d = %d", n, i, mult);
	}

	return 0;
}
