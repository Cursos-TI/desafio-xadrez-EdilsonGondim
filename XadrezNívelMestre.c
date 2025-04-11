#include <stdio.h>

                //RECURSIVIDADE.
void ImprimirMensagem() {
    printf("Hello world!");
}

void RecursiveLoop(int n) {
    if (n > 0) {
        printf("%d \n", n);
        RecursiveLoop(n - 1);
    }
}
            //RECURSIVIDADE DECRESCENTE.
void recursivo( int num) {
    if (num > 0) {
        printf("%d \n", num); //printf vem antes da função recursivo (imprime decrescente).
        recursivo(num - 1);
    }
}
            //RECURSIVIDADE CRESCENTE.

void recursivo2( int num2) {
    if (num2 > 0) {
        recursivo2(num2 - 1);
        printf("%d \n", num2); //printf vem após função recursivo (imprime crescente).
    }
}

int main() {

                //FORMAS AVANÇADAS DE DECLARAR LOOPS.

        //Laço de repetição com condições múltiplas.
    
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    printf("\n-------------------------------------------------\n");

            //Laço de repetição com operadores lógicos.

    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    printf("\n-------------------------------------------------\n");
    
            //Laço de repetição com operador ternário.
        
    for (int i = 0; i < 100; i += (i % 2 == 0)? 1 : 2) {
        printf("%d ", i);
    }
    printf("\n-------------------------------------------------\n\n");
    
            // Laço de repetição com continue e break.

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        } if (i == 8) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n-------------------------------------------------\n\n");
    
            //RECURSIVIDADE.

    ImprimirMensagem();

    printf("\n-------------------------------------------------\n\n");
    
    int numero = 5;
    printf("Contagem regressiva...\n");
    RecursiveLoop(numero);

    printf("\n-------------------------------------------------\n\n");

                 // void crescente.
    int fator = 10;
    printf("Contagem regressiva...\n");
    recursivo(fator);

    printf("\n-------------------------------------------------\n\n");

                //void decrescente.
    int fator2 = 10;
    printf("Contagem regressiva...\n");
    recursivo2(fator2);

    printf("\n-------------------------------------------------\n\n");


    return 0;
}
