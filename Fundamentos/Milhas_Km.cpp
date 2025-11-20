#include<stdio.h>
#include<locale.h>


// Criação de uma constante fora da função main: #define km 0.621371

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	float v, milhas;
	const float km = .621371; // Criação de uma constante dentro da função main
	printf("Digite a velocidade em km/h: ");
	scanf("%f", &v);
	milhas = v * km;
	
	printf("A velocidade em milhas é: %f", milhas);
	

	return 0;
}
