#include<stdio.h> // h significa header, "stdio" é uma biblioteca onde tem o código das funções/comandos
#include<locale.h> // locale é para conseguir usar caracteres portugueses como acentos e cedilhas
#include<stdlib.h> // biblioteca responsável pelo o comando system

int main(){

	setlocale (LC_ALL, "Portuguese"); // função responsável pelos caracteres portugueses
	
	printf("Olá Mundo");
	
	system("pause"); // este faz que ao abrir o executável, este pausa

	return 0;
}

// diferença ente // é só para uma linha em comentário, o /* serve para colocar várias linhas em comentário 