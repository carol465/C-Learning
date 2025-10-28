#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int matriz_1[2][2], matriz_2[2][2], subtracao[2][2], i, j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Insira os números para a primeira matriz 2x2: ");
			scanf("%d", &matriz_1[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Insira os números para a segunda matriz 2x2: ");
			scanf("%d", &matriz_2[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			subtracao[i][j] = matriz_1[i][j] - matriz_2[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nValor Posição: %d", subtracao[i][j]);
		}
	}
	

	return 0;
}
