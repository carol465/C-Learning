#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int n, x, i, j, count, dup;
	
	do{
	printf("Quantos numeros quer inserir? ");
	scanf("%d", &n);
	}while(n>100||n<0);
	
	int numero[n];
	
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d", &numero[i]);
	}
	
	dup = 0;
	
	for(i=0;i<n;i++){
		count = 0;
		for(j=i;j<n;j++){
			if(numero[i]==numero[j]){
				count ++;
				}
			}
		if(count>1){
			dup++;
		}
	}

	printf("Existem %d valores duplicados", dup/2);

	return 0;               
}
