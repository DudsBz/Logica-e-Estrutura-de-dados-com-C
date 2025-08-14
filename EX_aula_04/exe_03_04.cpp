/*
Faça um programa que receba um número.
O programa deve informar se:
O número é positivo, negativo ou zero.
O número é par ou ímpar

Dica:
 - O resto da divisão de um número par por 2 é igual a zero.
 - O resto da divisão em linguagem C é calculado usando o operador %
 */

 #include <stdio.h>
 int main() {
    int numero;
     
    printf("Digite um número: ");
    scanf("%d", &numero);
     
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }
     
    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }
     
    return 0;
 }