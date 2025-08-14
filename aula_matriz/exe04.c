/*Multiplicação de matrizes

Dadas as matrizes A e B, mostre a matriz C resultante da multiplicação de A e B.*/
#include <stdio.h>
int main(){
    int i, j, k, matrizA[3][3], matrizB[3][3], matrizR[3][3];
    printf("Digite os elementos da matriz A:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j<3;j++){
            scanf("%i", &matrizA[i][j]);
        }
    }
    printf("Digite os elementos da matriz B:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j<3;j++){
            scanf("%i", &matrizB[i][j]);
        }
    }
    printf("Matriz Resultante da Multiplicação:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j<3;j++){
            matrizR[i][j] = 0;
            for(k = 0; k < 3; k++){
                matrizR[i][j] += matrizA[i][k] * matrizB[k][j];
            }
            printf("%i ", matrizR[i][j]);
        }
        printf("\n");
    }
    return 0;
}