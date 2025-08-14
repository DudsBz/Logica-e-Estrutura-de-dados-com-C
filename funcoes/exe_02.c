/*Crie uma função que receba três valores, 'a', 'b' e 'c', 
que são os coeficientes de uma equação do segundo grau 
e retorne o valor do delta, que é dado por 'b² - 4ac'*/

#include <stdio.h>
#include <math.h>
double calcularDelta(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}
int main() {
    double a, b, c, delta;
    
    printf("Digite os coeficientes a, b e c da equação do segundo grau:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    
    delta = calcularDelta(a, b, c);
    
    printf("O valor de delta é: %.2lf\n", delta);
    
    return 0;
}