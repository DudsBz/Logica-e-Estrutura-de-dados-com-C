/*
Números primos entre 1 e 100 (FOR dentro de FOR):
     Escreva um programa que imprime todos os números primos entre 1 e 100.
*/
#include <stdio.h>
int main(){
    int i, j, primo;
    printf("Os numeros primos entre 1 e 100 sao:\n");
    for(i = 2; i <= 100; i++){
        primo = 1; // Assume que i é primo
        for(j = 2; j < i; j++){
            if(i % j == 0){ // Se i for divisível por j, não é primo
                primo = 0;
                break;
            }
        }
        if(primo){
            printf("%i ", i);
        }
    }
    printf("\n");
    return 0;
}