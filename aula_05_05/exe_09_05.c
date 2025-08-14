/*Crossover
Implemente um método de Crossover de um Algoritmo Genético.*/
#include <stdio.h>
#include <stdlib.h> // Para usar rand()
#include <time.h> // Para usar time()
#define TAMANHO 10 // Tamanho do vetor
int main() {
    int i, pontoCrossover, vetorA[TAMANHO], vetorB[TAMANHO], vetorC[TAMANHO];
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Preenche os vetores A e B com números aleatórios
    for(i = 0; i < TAMANHO; i++){
        vetorA[i] = rand() % 100; // Números aleatórios entre 0 e 99
        vetorB[i] = rand() % 100;
    }

    // Exibe os vetores A e B
    printf("Vetor A: ");
    for(i = 0; i < TAMANHO; i++){
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B: ");
    for(i = 0; i < TAMANHO; i++){
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    // Escolhe um ponto de crossover aleatório
    pontoCrossover = rand() % (TAMANHO - 1) + 1; // Entre 1 e TAMANHO-1

    // Realiza o crossover
    for(i = 0; i < TAMANHO; i++){
        if(i < pontoCrossover){
            vetorC[i] = vetorA[i]; // Copia do vetor A até o ponto de crossover
        } else {
            vetorC[i] = vetorB[i]; // Copia do vetor B após o ponto de crossover
        }
    }

    // Exibe o resultado do crossover
    printf("Vetor C (resultado do crossover): ");
    for(i = 0; i < TAMANHO; i++){
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}