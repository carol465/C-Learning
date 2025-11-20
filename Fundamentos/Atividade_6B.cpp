#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int matriz[3][3], i, j, count, soma_1 = 0, soma_2 = 0, soma_3 = 0;
	float media;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Insira os números para uma matriz 3x3: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0;i<1;i++){
		for(j=0;j<3;j++){
			soma_1 += matriz[i][j];	
		}
	}
	
	for(i=1;i<2;i++){
	    for(j=0;j<3;j++){  
	    	soma_2 += matriz[i][j];		
	    }
	}
	
	for(i=2;i<3;i++){
		for(j=0;j<3;j++){
			soma_3 += matriz[i][j];			
		}
	}

	media = (soma_1 + soma_2 + soma_3)/9;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nValor Posição [%d][%d]: %d", i+1, j+1, matriz[i][j]);
		}
	}
	
	printf("\nA soma da linha 1 é: %d \nA soma da linha 2 é: %d \nA soma da linha 3 é: %d \nA média doa valores da matriz é: %2.f", soma_1, soma_2, soma_3, media);

	return 0;
}
