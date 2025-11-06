#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int a, b;
	int *ptr1, *ptr2, *temp;
	
	a = 1;
	b = 2;
	ptr1 = &a;
	ptr2 = &b;
	
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	
	printf("\nAntes: a = %d e b = %d", a, b);
	printf("\nDepois: a = %d e b = %d", *ptr1, *ptr2);

	return 0;
}
