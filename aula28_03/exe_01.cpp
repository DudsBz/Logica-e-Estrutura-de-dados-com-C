#include <stdio.h>
/*
) Programa que recebe os dados do usuário e imprime na tela a sua ficha de cadastro formatada. Considere os seguintes dados: Nome, idade, peso e altura.

Resultado esperado:

******************************
Ficha de Cadastro de Pessoa
******************************
Nome: João
Idade: 28 anos
Peso: 75.5 kg
Altura: 1.78 m
******************************

Obs.: Se preferir, pode elaborar fichas mais complexas.
*/

int main(){

    
    char myName[50];
    int age;
    float weight;
    float height;

    printf("Qual sua nome?\n");
    scanf("%s", &myName);

    printf("Qual sua idade?\n");
    scanf("%d", &age);

    printf("Qual seu peso?\n");
    scanf("%f", &weight);

    printf("Qual sua altura?\n");
    scanf("%f", &height);

    printf("***********************\n");
    printf("CADASTRO DE PESSOAS\n");
    printf("***********************\n");
    printf("Nome: %s \n", myName);
    printf("Idade: %d \n", age);
    printf("Peso: %.1f \n", weight);
    printf("Altura: %.1f \n", height);

    return 0;
}