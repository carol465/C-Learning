#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char passe[13];
    int letras = 0;
    int digitos = 0;
    int especiais = 0;
    int i;
	
	printf("A sua palavra passe devera ter no total 12 caracteres,  em que 2 deles sao digitos e 2  deles sao caracteres especiais\n");
	printf("\nInsira a sua palavra passe: ");
	fgets (passe,13,stdin);
	
	    for (i = 0; passe[i] != '\0'; i++) {

        if (isalpha(passe[i])) {
            letras++;
        } 

        else if (isdigit(passe[i])) {
            digitos++;
        } 

        else {
 
            if (passe[i] != '\0') { 
                especiais++;
            }
        }
    }
    
    if(letras>8){
	   	printf("\nPasse errada! Numero de letras a mais.");
    }
    else if(digitos != 2){
    	printf("\nPasse errada! Insira apenas 2 digitos.");
    }	
    else if(especiais != 2){
		printf("\nPasse errada! Insira apenas 2 caracteres especiais.");
	}		
	else{
		printf("\nPasse aceite!");
	}

	return 0;
}
