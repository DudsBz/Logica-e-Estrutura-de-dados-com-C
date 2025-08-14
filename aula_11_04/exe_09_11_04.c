/*
Número reverso (DO-WHILE): Peça um número inteiro ao usuário e imprima seu reverso. Ex: 1234 → 4321.
*/
#include <stdio.h>
int main() {
    int numero;
    int reverso = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    do {
        reverso = reverso * 10 + (numero % 10); // Adiciona o último dígito do número ao reverso
        numero /= 10; // Remove o último dígito do número
    } while (numero != 0); // Continua até que não haja mais dígitos
    printf("O numero reverso e: %d\n", reverso);
    return 0;
}