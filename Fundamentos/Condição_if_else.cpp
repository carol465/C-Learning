#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int a = 5, b = 5; // para atribuir algo igual algo usa-se apenas =
	
	if(a!=0 && b!=0){
		if(a<b)
		{
			printf("a é maior que b");
		}
		else // a = b ou a < b
		{
			if(a==b) // em comparação tem que usar ==
			{
				printf("a é igual a b");
			}	
			else
			{
				printf("a é menor que b");
			}
		}
	}	
		else{
			printf("Não foi possível ler o valor");
		}
// um if sem um else pode existir, mas um else sem um if não
	return 0;
}
