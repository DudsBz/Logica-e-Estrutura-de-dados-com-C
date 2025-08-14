/*
3) Calculadora para:
soma;
subtração;
multiplicação;
divisão;
potência;
raiz quadrada;
porcentagem;
(Pode criar um programa para cada operação).
*/
#include <stdio.h>
#include <math.h>

int main(){

    int escolha;
    printf("Digite 1 se quer soma\n");
    printf("Digite 2 se quer subtrair\n");
    printf("Digite 3 se quer multiplicar\n");
    printf("Digite 4 se quer dividir\n");
    printf("Digite 5 se quer potencializar\n");
    printf("Digite 6 se quer racionalizar\n");
    printf("Digite 7 se quer porcentagem\n");
    scanf("%i", &escolha);

    if (escolha == 1){
        float x;
        float y;
        printf("Digite um numero: ");
        scanf("%f", &x);
        printf("Digite outro numero: ");
        scanf("%f", &y);
        float soma = x + y;
        printf("A soma de %.1f e de %.1f e de: %.1f", x, y, soma);

    }else if(escolha == 2){
        float x;
        float y;
        printf("Digite um numero: ");
        scanf("%f", &x);

        printf("Digite outro numero: ");
        scanf("%f", &y);
        float sub = x - y;
        printf("A subtracao de %.1f e de %.1f e de: %.1f", x, y, sub);

    }else if(escolha == 3 ){
        float x;
        float y;
        printf("Digite um numero: ");
        scanf("%f", &x);

        printf("Digite outro numero: ");
        scanf("%f", &y);
        float mult = x * y;
        printf("A multiplicacao de %.1f e de %.1f e de: %.1f", x, y, mult);
    }else if(escolha == 4){
        float x;
        float y;
        printf("Digite um numero: ");
        scanf("%f", &x);

        printf("Digite outro numero: ");
        scanf("%f", &y);
        float div = x/y;
        printf("A divisao de %.1f por %.1f e de: %.1f", x, y, div);
    }else if(escolha == 5){
        float x;
        float y;
        printf("Digite um numero: ");
        scanf("%f", &x);

        printf("Digite a potencia: ");
        scanf("%f", &y);
        float pot = pow(x, y);
        printf("%.1f elevado a %.1f e igual a: %.1f", x, y, pot);
    }else if(escolha == 6){
        float y;
        printf("Digite o numero a ser radicionalizado: ");
        scanf("%f", &y);
        float radc = sqrt(y);
        printf("A radicionalizacao de %.1f e: %.1f", y, radc);

    }else if(escolha == 7){
        int x;
        float y;
        printf("Digite a porcentagem: ");
        scanf("%i", &x);

        printf("Digite o numero para calcular a porcentagem: ");
        scanf("%f", &y);
        float porc = x * (y/100);
        printf("Porcentagem: %.1f", porc);
    }else{
        printf("Digito invalido!!");
    }
    return 0;
}