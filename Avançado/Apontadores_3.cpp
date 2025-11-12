#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int m = 10;
	int n, o;
	int *z; 
	
	z = &m;
	o = 0;
	
	
	printf("z armazena o endereco de m = %p\n", z);
    printf("*z armazena o valor de m = %d\n", *z);
    printf("&m é o endereco de m = %p\n", &m);
    printf("&n armazena o endereco de n = %p\n", &n);
    printf("&o armazena o endereco de o = %p\n", &o);
    printf("&z armazena o endereco de z = %p\n", &z);
	

	return 0;
}

