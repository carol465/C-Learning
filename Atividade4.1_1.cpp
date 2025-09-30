#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int alunas, alunos;
	
	printf("Insira o numero de alunas: ");
	scanf("%d", &alunas);
	
	printf("Insira o numero de alunos: ");
	scanf("%d", &alunos);
	
	if(alunas>alunos){
		printf("Numero de alunas: %d, Numero de alunos: %d", alunas,alunos);
	}
	else if(alunas==alunos){
		printf("O numero de alunas é igual ao numero de alunos %d", alunas);
	}
	else{
		printf("Numero de alunos: %d, Numero de alunas: %d", alunos,alunas);
	}

	return 0;
}
