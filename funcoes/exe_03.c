/*Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime o correspondente em graus Celsius usando as fórmulas que
seguem.
 a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula
 C=(f-32.0) * (5.0/9.0).
 Utilize funções*/

#include <stdio.h>
double fahrenheitToCelsiusDouble(double fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    double fahrenheitDouble;
    // Leitura do valor em Fahrenheit como double
    printf("Digite o valor em graus Fahrenheit (double): ");
    scanf("%lf", &fahrenheitDouble);
    printf("Valor em Celsius (double): %.2lf\n", fahrenheitToCelsiusDouble(fahrenheitDouble));

    
    return 0;
}
