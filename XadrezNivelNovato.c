#include <stdio.h>

int main() {
                // USANDO WHILE
                //Primeiro exemplo
    /*int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
             //Segundo exemplo
    int num;

    printf("Digite um número negativo para sair do programa e positivo para continuar: \n");
    scanf("%d", &num);

    while (num >= 0) {
        printf("Digite um número negativo para sair do programa e positivo para continuar: \n");
        scanf("%d", &num);
    }
    printf("\nNúmero negativo detectado, saindo do programa...\n\n");
     

            // USANDO DO WHILE. Primeiro exemplo.

    int i = 1, num;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    printf("FIM\n\n");

    do {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
        if (num >= 0) {
            printf("Você digitou: %d\n", num);
        }
    } while (num >= 0);
    printf("\nNúmero negativo detectado, saindo do programa...\n\n");
                   
                //Segundo exemplo
                
    int option;

    do {
        printf("\n\n     -MENU- \n[1] OPÇÃO 1 \n[2] OPÇÃO 2 \n[3] SAIR \nOPÇÃO: ");
        scanf("%d", &option);
        printf("\n");
        switch (option) {
            case 1:
                printf("Você escolheu opção 1.");
                break;
            case 2:
                printf("Você escolheu opção 2.");
                break;
            case 3:
                printf("Saindo do programa...");
                break;
            default:
                printf("OPÇÃO INVÁLIDA!");
                break;
        }
        printf("\n");   
    } while (option != 3);
    printf("\nFim do programa\n\n");
    */

            //USANDO FOR
            
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
            //USANDO FOR COM OUTRAS OPERAÇÕES
    printf("\n--------------------------\n");

    for (int j = 1; j <= 20; j++) {
        if (j % 2 == 0) {
            printf("%d\n", j);
        }
    }
    printf("\n--------------------------\n");

    for (int k = 0; k <= 100; k += 10) {
        printf("%d\n", k);
    }
    printf("\n--------------------------\n");

    for (int l = 100; l >= 0; l -= 10) {
        printf("%d\n", l);
    }
    

    return 0;
}
