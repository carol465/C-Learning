#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int n, i, count;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &n);
	
	count = 0;
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("\n%d", i);	
			count++;
		}
	}
	
	printf("\n\nNumero %d tem %d divisores", n, count);

	return 0;
}
