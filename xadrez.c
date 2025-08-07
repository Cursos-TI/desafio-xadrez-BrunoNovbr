#include <stdio.h>

int main () {
    
    int opcao;
    int i = 1, j = 1;

    printf("Escolha uma peça para mover:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Digite o número respectivo a peça: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: //Mover a Torre 5 casas para a direita.
    while ( i <= 5) {
        printf("Torre movida para a direita.\n");
        i++;
        }
        break;
    case 2: // Mover o Bispo na diagonal, 5 casas cima-direita
    do {
        printf("Bispo movido para cima, direita.\n");
        i++;
    } while (i <= 5);
    break;
    case 3: // Mover a Rainha 8 casas para a esquerda
        for (i = 1; i <= 8; i++) {
        printf("Rainha movida para a esquerda\n");
        }
    break;
    case 4: //Mover o Cavalo, 2 casas para baixo e 1 para a esquerda
        for (i = 1; i < 2; i++){
            printf("Cavalo movido para: ");
            while (j <= 2) {
                printf("Baixo, ");
                j++;
            }
            printf("Esquerda\n");
        }
        break;
    default:
        printf("Opção inválida");
        break;
    }
    return 0;
}