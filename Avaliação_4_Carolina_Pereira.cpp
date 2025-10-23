#include<stdio.h>
#include<locale.h>
#include <string.h>

float media(int m1, int m2) {
	float calculo;
    calculo = (m1 + m2)/2;
    
    return calculo;
  } 

int main() {

    int nlocal = 5;

    int maxima[nlocal], minima[nlocal],i;
    float medias[nlocal];

    printf("--- Leitura das Temperaturas ---\n");
    
    for(i = 0; i < nlocal; i++){

        printf("Local %d: Digite a temperatura maxima: ", i + 1);
        scanf("%d", &maxima[nlocal]);
        
    }                      
    
    for(int i = 0; i < nlocal; i++){

        printf("Local %d: Digite a temperatura minima: ", i + 1);
        scanf("%d", &minima[nlocal]);
        
    }                      

    for(i = 0; i < nlocal; i++){
        medias[i] = media(maxima[i], minima[i]);

        printf("Local %d: Maximas=%d, Minimas=%d, Media=%.2f\n\n",i + 1, maxima[i], minima[i], medias[i]);
    }


    return 0; 
    
}