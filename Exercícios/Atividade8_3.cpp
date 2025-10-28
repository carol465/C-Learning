#include<stdio.h>
#include<locale.h>
#include <string.h>
#include <ctype.h>

int absoluto(int n){
	if(n < 0){
		return -(n);
	}
	return n;
}

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	printf("Absoluto do numero: %d", absoluto(num));

	return 0;
}
