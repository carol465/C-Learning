#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int n, i, j;
	int num[100];
	int temp;    
	
	do{
	printf("Quantos numeros quer inserir? ");
	scanf("%d", &n);
	}while(n>100||n<0);
	
	
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d", &num[i]);
	}
	
	
	for(i=0;i<n-1;i++){ 
    	for(j=0;j<n-i-1;j++){
        	if(num[j]>num[j+1]){
            	temp = num[j];
            	num[j] = num[j+1];
            	num[j+1] = temp;
        	}			
    	}
	}
	
        printf("Vetor por ordem crescente:\n");
        for (i=0;i<n;i++){
            printf("%d ", num[i]);
        }


	return 0;
}
