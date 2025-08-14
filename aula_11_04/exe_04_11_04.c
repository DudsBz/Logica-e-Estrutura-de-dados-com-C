/*
Fatorial de um número (FOR): Crie um programa que calcula o fatorial de um número inteiro informado pelo usuário, usando for.
*/
#include <stdio.h>
int main(){
    int n, i;
    printf("Digite um numero inteiro ate 10:");
    scanf("%d", &n);
    if(n < 0 || n > 10){
        printf("Numero invalido. Tente novamente.\n");
        return 1;
    }else if(n == 0 || n == 1){
        printf("O fatorial de %d e: 1\n", n);{
        return 0;
        }
    }
    int fatorial = 1;
    //n é o numero que o usuario digitou
    //i é o contador que vai de 1 até n
    for(i = 1; i <= n; i++){
        fatorial *= i; 
    }
    printf("O fatorial de %d e: %d\n", n, fatorial);

    return 0;
}