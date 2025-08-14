
/*Crie uma função que receba um valor e diga se é nulo ou não.*/

#include <stdio.h>
#include <stdbool.h>
bool isNull(int value) {
    return value == 0;
}
int main() {
    int value;
    printf("Digite um valor: ");
    scanf("%d", &value);
    
    if (isNull(value)) {
        printf("O valor é nulo.\n");
    } else {
        printf("O valor não é nulo.\n");
    }
    
    return 0;
}
