/*Verificação de Matriz Simétrica
Dada uma matriz quadrada 4x4, verifique se ela é simétrica (ou seja, se M[i][j] == M[j][i] para todos os i e j).*/

#include <stdio.h>
int main() {
    int i, j, matriz[4][4], simetrica = 1; 
    
    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &matriz[i][j]); 
        }
    }
    
    // Verifica se a matriz é simétrica
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] != matriz[j][i]) { 
                simetrica = 0; 
                break;
            }
        }
        if(!simetrica) { 
            break;
        }
    }
    
    if(simetrica) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }
    
    return 0;
}