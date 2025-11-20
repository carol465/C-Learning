#include<stdio.h>
#include<locale.h>

int maior(int n[]){
	
	 int i;
	 int m = n[0];
    
    for (i=0;i<10;i++){
        if(n[i] > m){
            m = n[i];
        }
	}
	return m;
}


int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num[10], i;
	
	printf("---- Insira 10 numeros ---- \n\n");
	
	for (i = 0; i < 10; i++){
		printf("Insira um numero: ");
		scanf("%d", &num[i]);
	}
	
	printf("\nO maior numero da lista: %d", maior(num));

	return 0;
}

