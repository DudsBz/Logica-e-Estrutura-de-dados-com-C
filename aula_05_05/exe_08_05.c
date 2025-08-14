/*Subvetor Contido
Escreva um programa que leia dois vetores A (tamanho 10) e B (tamanho 3) 
e verifique se o vetor B está contido como subvetor contínuo em A (mesma ordem).
 Ex: A = {1,2,3,4,5,6,7,8,9,10} e B = {4,5,6} → contido.*/

#include <stdio.h>
#include <stdbool.h> // Para usar o tipo bool
int main() {
    int A[10], B[3], i, j;
    bool contido = false; // Inicializa a variável contido como falsa

    // Lê os elementos do vetor A
    printf("Digite 10 numeros para o vetor A:\n");
    for(i = 0; i < 10; i++){
        scanf("%i", &A[i]);
    }

    // Lê os elementos do vetor B
    printf("Digite 3 numeros para o vetor B:\n");
    for(i = 0; i < 3; i++){
        scanf("%i", &B[i]);
    }

    // Verifica se B está contido em A
    for(i = 0; i <= 7; i++){ // Limite de 7 para evitar overflow
        contido = true; // Assume que B está contido
        for(j = 0; j < 3; j++){
            if(A[i + j] != B[j]){ // Se não forem iguais, não está contido
                contido = false;
                break;
            }
        }
        if(contido){ // Se encontrado, sai do loop
            break;
        }
    }

    if(contido){
        printf("O vetor B esta contido no vetor A.\n");
    } else {
        printf("O vetor B nao esta contido no vetor A.\n");
    }

    return 0;
}