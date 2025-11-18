#include <stdio.h>
#include <locale.h>

void multiplicar(int *a, int n){
	int i;
	
    for(int i = 0; i < n; i++){
    	a[i] = a[i]*2;
	}	
	return ;
        
}

int main()
{
    setlocale (LC_ALL, "Portuguese");
    
    printf("--- MULTIPLICAR VETOR POR 2 ---\n");
    
    int n, i;
    
    printf("Quantos numeros vai inserir? ");
    scanf("%d", &n);
    
    int v[n];

    for(i = 0; i < n; i++){
    	printf("Insira um numero inteiro: ");
    	scanf("%d", &v[i]);
    }
   
    multiplicar(v, n);
    
    printf("\nVetor Multiplicado por 2:\n");
    for(i = 0; i < n; i++){
        printf("Vetor[%d] = %d\n", i, v[i]);
    }
       
    return 0;
}
