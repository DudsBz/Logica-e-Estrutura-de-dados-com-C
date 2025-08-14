/*Soma de matrizes.

Dadas as matrizes A e B de 3x3, mostre a matriz C resultante da soma de A e B.*/
#include <stdio.h>
int main(){
    int i, j, matrizA[3][3], matrizB[3][3], matrizR[3][3];
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
    printf("Matriz Resultante da Soma:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j<3;j++){
            matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%i ", matrizR[i][j]);
        }
        printf("\n");
    }
    






    return 0;

}