#include <stdio.h>
#include <string.h>
#include <ctype.h> 

float media(int maxima, int minima) {
    return (float)(maxima + minima) / 2;
}

int main() {

    const int nlocal = 5;

    int maximas[nlocal];
    int minimas[nlocal];
    float medias[nlocal];

    printf("--- Leitura das Temperaturas ---\n");
    
    for(int i = 0; i < nlocal; i++){

        printf("Local %d: Digite a temperatura maxima: ", i + 1);
        scanf("%d", &)
        
    }

    for(int i = 0; i < nlocal; i++){
        medias[i] = media(maximas[i], minimas[i]);

        printf("Local %d: Maxima=%d, Minima=%d, Media=%.2f\n",i + 1, maximas[i], minimas[i], medias[i]);
    }


    return 0; 
    
}
