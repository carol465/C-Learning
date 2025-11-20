#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");

	int p;
	
	printf("Insira a password:");
	scanf("%d", &p);
	
	
	switch(p){
		case 1234:
			printf("Bem vindo!");
			break;
		default:
			printf ("Password Incoreta");
	}
	
	return 0;
}
