#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i, n, numero[10] = {18,22,30,45,59,61,79,83,96,10};
	
		printf("Digite posicao que deseja eliminar: ");
		scanf("%d", &n);
	
		for(i=n;i<10;i++){
			numero[i-1]=numero[i];
		}
		
		numero[9]={};
		
		for(i=0;i<10;i++){
			printf("O numero na posicao %d: %d\n", i, numero[i]);
		}

	return 0;
}
