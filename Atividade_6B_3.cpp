#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int main() {
    
      int matriz[3][2], transposta[2][3];
      int i, j;
   
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
        printf("Digite um número para a posição [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    	}
    }
    printf("Matriz Original:\n");
    
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
        	printf("%d\n", matriz[i][j]);
        }
    }
    
    printf("\n");
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
        	transposta[j][i]=matriz[i][j];
        }
    }
    
    printf("\n");
    printf("A Matriz Transposta:\n");
    
     for (i=0;i<2;i++){
        for(j=0;j<3;j++){
        	printf("%d\n", transposta[i][j]);
        }
     }

    return 0;
}

