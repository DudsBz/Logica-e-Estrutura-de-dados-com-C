#include <stdio.h>
#include <math.h>
//2) Calculadora que calcula o IMC e apresenta o resultado e a tabela de referência.
//peso dividido pela altura
int main(){
    float peso;
    float altura;
    
    printf("Qual seu peso em KG?\n");
    scanf("%f", &peso);

    printf("Qual sua altura em metros?\n");
    scanf("%f", &altura);

    float resul = peso / pow(altura, 2);
    printf("Seu IMC: %1.f\n\n\n", resul);

    printf("Classification ***************** IMC\n");
    printf("Baixo Peso                 Menor que 18,5\n");
    printf("Normal                        18,5 - 24,9\n");
    printf("Sobrepeso                   Maior que 25\n");
    printf("Pre-obeso                       25 - 29,9\n");
    printf("Obeso I                         30 - 34,9\n");
    printf("Obeso II                        35 - 39,9\n");
    printf("Obse III                    Maior que 40\n");


}