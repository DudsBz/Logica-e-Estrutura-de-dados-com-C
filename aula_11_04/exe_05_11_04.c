/*
Média de valores positivos (WHILE): Solicite números ao usuário até que ele digite um número negativo.
 Em seguida, calcule e exiba a média dos valores positivos digitados.
*/
#include <stdio.h>
int main(){
    int n, soma, contador = 0;
    float media = 0.0;
    printf("Digite um numero (negativo para sair): ");
    scanf("%d", &n);
    // n é o número digitado pelo usuário
    // soma é a soma dos números positivos digitados
    while(n >= 0){
        soma += n;
        contador++;
        printf("Digite um numero (negativo para sair): ");
        scanf("%d", &n);
    }
    if(contador > 0){
        // (float) 
        media = (float)soma / contador;
        printf("A media dos numeros positivos e: %.2f\n", media);
    }else{
        printf("Nenhum numero positivo foi digitado.\n");
    }
    return 0;
}