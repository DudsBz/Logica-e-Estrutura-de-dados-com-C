/*
Faça um programa que solicita ao usuário um número inteiro N e calcula a soma dos números de 1 até N usando while.
*/
#include <stdio.h>
int main(){
    int n = 1;
    int i = 1 ;
    int soma = 0;
    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);
    while(i <= n){
        soma += i;
        i++;
    }
    printf("A soma dos numeros de 1 a %d e: %d\n", n, soma);
    return 0;
}