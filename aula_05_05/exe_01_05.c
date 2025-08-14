/*Soma dos Elementos
Escreva um programa que leia 10 números inteiros e armazene em um vetor. Em seguida, exiba a soma de todos os elementos. */
#include <stdio.h>
int main(){
    int i, soma = 0, numeros[10];
    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++){
        scanf("%i", &numeros[i]);
        soma += numeros[i];
    }
    printf("A soma dos elementos e: %i\n", soma);
    return 0;
}