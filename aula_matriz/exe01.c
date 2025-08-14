/*Diagonais.

Desenvolver um algoritmo que mostre os elementos da diagonal principal e secundária de uma matriz.*/
#include <stdio.h>

int main(){
    int i, j, matriz[3][3];
    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%i", &matriz[i][j]); 
        }
    }
    printf("Diagonal Principal:\n");
    for(i = 0; i < 3; i++){
        // A diagonal principal é formada pelos elementos onde a linha e a coluna são iguais
        // Exemplo: matriz[0][0], matriz[1][1], matriz[2][2]

        printf("%i ", matriz[i][i]); 
    }
    printf("\nDiagonal Secundária:\n");
    for(i = 0; i < 3; i++){
        // A diagonal secundária é formada pelos elementos onde a soma da linha e coluna é igual a 2
        // Exemplo: matriz[0][2], matriz[1][1], matriz[2][0]
        printf("%i ", matriz[i][2-i]); 
    }
    printf("\n");

    return 0;
}