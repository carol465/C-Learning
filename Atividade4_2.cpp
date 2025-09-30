#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num, par;
	
	printf("Insira um número inteiro: ");
	scanf("%d", &num);
	
	par = num + 1;
	
	if(num%2==0){
		printf("Este número é par");
	}
	else{
		printf("Este número não é par. O número par a seguir é: %d", par );
	}
	

	return 0;
}
