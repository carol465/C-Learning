#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");

char i;

for(i=65;i<91;i++){
	printf("%c, %c\n", i, i + 32);
}

	return 0;
}
