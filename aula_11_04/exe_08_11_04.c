/*
Triângulo de asteriscos (Laço dentro de laço): Imprima um triângulo de asteriscos de tamanho N.
 Exemplo para n=5: 
*/

#include <stdio.h>
int main() {
    int n, i, j;
    printf("Digite o tamanho do triangulo: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}