/*Maior e Menor Elemento
Leia 5 números e armazene em um vetor. Depois, exiba o maior e o menor valor armazenado.*/
#include <stdio.h>
int main(){
    int i, maior, menor, numeros[5];
    printf("Digite 5 numeros:\n");
    for(i = 0; i < 5; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    maior = menor = numeros[0];
    for(i = 1; i < 5; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}