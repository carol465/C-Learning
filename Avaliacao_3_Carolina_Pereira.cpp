#include<stdio.h>
#include<locale.h>

int cal(int n){
	
	if(n <= 1000){
		n = n - (n * 0.05);
	}
	if((n > 1000)&&(n >= 1200)){
		n = n - (n * 0.06);
	}
	else if(n > 1200){
		n = n - (n * 0.07);
	}
}

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int tipo, bruto, liquido;
	
do{
	printf("Insira o tipo de funcionario: ");
	scanf("%d", &tipo);

	printf("Insira o seu vencimento bruto: ");
	scanf("%d", &bruto);
	
	liquido = cal(bruto);
	
	printf("Vencimento Liquido: %d ", liquido);
	
}while(tipo == 99);
		
	return 0;
}
