#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i, j, n;
	
	printf("Insira o numero de linhas: ");
	scanf("%d", &n);
	
	
    for (int i = 0; i < n; i++){
    	for (int j = 0; j <=i; j++){
    	printf("*");
		}
        printf("\n");
    }


    return 0;
}



