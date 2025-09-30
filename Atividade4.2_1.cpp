#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira o numero do mes: ");
	scanf("%d", &num);
	
	switch(num){
		case 1:
			printf("O mes %d tem 31 dias", num);
			break;
		case 2:
			printf("O mes %d tem 28 dias", num);
			break;
		case 3:
			printf("O mes %d tem 31 dias", num);
			break;
		case 5:		
			printf("O mes %d tem 31 dias", num);
			break;
		case 7:			
			printf("O mes %d tem 31 dias", num);
			break;
		case 8:		
			printf("O mes %d tem 31 dias", num);
			break;
		case 10:		
			printf("O mes %d tem 31 dias", num);
			break;
		case 12:		
			printf("O mes %d tem 31 dias", num);
			break;					
		case 4:
			printf("O mes %d tem 30 dias", num);
			break;
		case 6:
			printf("O mes %d tem 30 dias", num);
			break;
		case 9:
			printf("O mes %d tem 30 dias", num);
			break;
		case 11:
			printf("O mes %d tem 30 dias", num);
		break;
	}

	return 0;
}
