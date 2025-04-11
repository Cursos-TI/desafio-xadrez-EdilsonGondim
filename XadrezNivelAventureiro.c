#include <stdio.h>

int main() {

            //UTILIZANDO FOR ANINHADO COM FOR.
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    printf("\n-----------------------------------------------------------------------------------------\n");

            //UTILIZANDO FOR ANINHADO COM WHILE.

    for (int ii = 1; ii <= 10; ii++) {
        int jj = 1;
        while (jj <= 10) {
            printf("%d\t", ii * jj);
            jj++;
        }
        printf("\n");
    }

    printf("\n-----------------------------------------------------------------------------------------\n");

            //UTILIZANDO WHILE COM WHILE.

    int iii = 1;
    while (iii <= 10) {
        int jjj = 1;
        while (jjj <= 10) {
            printf("%d\t", iii * jjj);
            jjj++;
        }
        printf("\n");
        iii++;
    }

    printf("\n-----------------------------------------------------------------------------------------\n");

            //UTILIZANDO DO WHILE COM DO WHILE.

    int i4 = 1;
    do {
        int j4 = 1;
        do {
            printf("%d\t", i4 * j4);
            j4++;
        } while (j4 <= 10);
        printf("\n");
        i4++;
    } while (i4 <= 10);

    printf("\n-----------------------------------------------------------------------------------------\n");

            //HORA DE CODAR: UTILIZANDO FOR COM CHAR.

    int i, j;
    char letra;

    for (i = 1; i <= 5; i++){
        letra = 'A';
        for ( j = 1; j <= i; j++) {
            printf("%c", letra);
            letra ++;
        }
        printf("\n");
    }

    return 0;
}
