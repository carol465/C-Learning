#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i, soma;
	i=5;
	
	while(i<=100 && i%5 == 0){
		printf("\n%d",i);
		i = i + 5;
	};
	
	soma = i + i;
	printf("\nSoma = %d", soma);

	return 0;
}
