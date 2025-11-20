#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int n, i, count;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &n);
	
	i = 1;
	count = 0;
	
	while(i>=0 && i<=n){
		i++;
		if(n%i==0){
			printf("\n%d", i);	
			count++;
		}
	}
	
	printf("\n\nNumero %d tem %d divisores", n, count);

	return 0;
}