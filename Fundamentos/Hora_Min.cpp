#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int h, min, hora, tempo;
	
	printf("Insira a hora: ");
	scanf("%d", &h);
	printf("Insira os minutos: ");
	scanf("%d", &min); // scanf("%d%d", &h, &min) ou ("%d:%d", &h, &min) ou ("%d-%d", &h, &min)
	hora = h*60;
	tempo = hora + min;
	
	printf("O resultado em minutos: %d minutos", tempo);

	return 0;
}
