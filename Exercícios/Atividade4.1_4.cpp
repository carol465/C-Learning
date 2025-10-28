#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	float km, pagar, iva;
	int tipo;
	
	printf("Insira a distancia em km: ");
	scanf("%f", &km);
	
	printf("Insira o tipo de corrida (tipo 1 ou tipo 2): ");
	scanf("%d", &tipo);
	
	if(tipo == 1){
		pagar = km * 0.7;
		iva = pagar + (pagar*0.23);
		printf("O consumo  realizado em %2.f, do tipo %d, o valor a pagar com iva é %f e sem iva é %f", km, tipo, iva, pagar);
	}
	if(tipo==2){
		pagar = km * 0.95;
		iva = pagar + (pagar*0.23);
		printf("O consumo  realizado em %2.f, do tipo %d, o valor a pagar com iva é %f e sem iva é %f", km, tipo, iva, pagar);
	}

	return 0;
}
