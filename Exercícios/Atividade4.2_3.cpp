#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int cod;
	
	printf("Insira o codigo: ");
	scanf("%d", &cod);
	
	switch(cod){
		case 1:
			printf("Alimento não-perecivel");
			break;
		case 2:
			printf("Alimento perecivel");
			break;
		case 3:
			printf("Alimento perecivel");
			break;
		case 4:
			printf("Alimento perecivel");
			break;
		case 5:
			printf("Vestuario");
			break;
		case 6:
			printf("Vestuario");
			break;
		case 7:
			printf("Higiene Pessoal");
			break;
		case 8:
			printf("Limpeza e Utensilios Domesticos");
			break;
		case 9:
			printf("Limpeza e Utensilios Domesticos");
			break;
		case 10:
			printf("Limpeza e Utensilios Domesticos");
			break;
		case 11:
			printf("Limpeza e Utensilios Domesticos");
			break;
		case 12:
			printf("Limpeza e Utensilios Domesticos");
			break;
		case 13:
			printf("Limpeza e Utensilios Domesticos");
			break;
		case 14:
			printf("Limpeza e Utensilios Domesticos");
			break;
		case 15:
			printf("Limpeza e Utensilios Domesticos");
			break;
		default :
            printf("Codigo invalido");
			break;
	}

	return 0;
}
