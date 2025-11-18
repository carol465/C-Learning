#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    
    printf("--- QUAL MAIOR NUMERO? ---\n");
    
    int m[10], maior;
    int i;
    int *p;
    p = &maior;
    
    for(i = 0; i < 10; i++){
    	printf("Insira um numero inteiro: ");
    	scanf("%d", &m[i]);
    }
    
	maior = m[0];
    
    for(i = 0; i < 10; i++){
    	 if(m[i] > maior){
    	 	maior = m[i];
		 }
	}
	
	printf("Maior numero: %d", *p);
       
    return 0;
}