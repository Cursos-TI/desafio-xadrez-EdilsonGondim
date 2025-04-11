#include <stdio.h>

void TORRE(int t) {
    if (t > 0){
        printf("Direita \n");
        TORRE(t - 1);
    }
}

void BISPO(int b) {
    if (b > 0) {
        printf("Cima-Direita \n");
        BISPO(b - 1);
    }
}

void RAINHA(int r) {
    if (r > 0) {
        printf("Esquerda \n");
        RAINHA(r - 1);
    }
}

void CAVALO(int c) {
    do {
        for(int cav = 2; cav > 0; cav--) {
            printf("Cima \n");
        }
        printf("Direita \n");
    } while(c > 1);
}

int main () {

    int torre = 5, bispo = 5, rainha = 8, cavalo = 1; 

            // TORRE
    printf("\n    -TORRE-\n");
    TORRE(torre);

    printf("\n------------------------------\n");

            //BISPO
    printf("     -BISPO-\n");
    BISPO(bispo);

    printf("\n------------------------------\n");

            //RAINHA
    printf("      -RAINHA-\n");
    RAINHA(rainha);

    printf("\n------------------------------\n");

            //CAVALO
    printf("     -CAVALO-\n");
    CAVALO(cavalo);

    printf("\n------------------------------\n");

    return 0;
}
