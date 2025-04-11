#include <stdio.h>

            //DESAFIO NÍVEL MESTRE: MOVIMENTANDO PEÇAS DO XADREZ COM RECURSIVIDADE
        
        //MOVIMENTO TORRE
void TORRE(int t) {
    if (t > 0){
        printf("Direita \n");
        TORRE(t - 1);
    }
}
        //MOVIMENTO BISPO
void BISPO(int b) {
    if (b > 0) {
        printf("Cima-Direita \n");
        BISPO(b - 1);
    }
}
        //MOVIMENTO RAINHA
void RAINHA(int r) {
    if (r > 0) {
        printf("Esquerda \n");
        RAINHA(r - 1);
    }
}
        //MOVIMENTO CAVALO
void CAVALO(int c) {
    do {
        for(int cav = 2; cav > 0; cav--) {
            printf("Cima \n");
        }
        printf("Direita \n");
    } while(c > 1);
}

int main () {
            //VARIÁVÉIS 
    int torre = 5, bispo = 5, rainha = 8, cavalo = 1; 

            //CHAMADA TORRE
    printf("\n    -TORRE-\n");
    TORRE(torre);

    printf("\n------------------------------\n");

            //CHAMADA BISPO
    printf("     -BISPO-\n");
    BISPO(bispo);

    printf("\n------------------------------\n");

            //CHAMADA RAINHA
    printf("      -RAINHA-\n");
    RAINHA(rainha);

    printf("\n------------------------------\n");

            //CHAMADA CAVALO
    printf("     -CAVALO-\n");
    CAVALO(cavalo);

    printf("\n------------------------------\n");

    return 0;
}
