/*5) Conversão de medidas
 Km para metros;
 Metros para Km;
 Temperatura de fahrenheit para Celsius;
(Pode criar um programa para cada operação).*/
#include <stdio.h>
#include <math.h>

int main(){
    int escolha;
    printf("Digite 1 se quer transformar Km para metros\n");
    printf("Digite 2 se quer Metros para Km\n");
    printf("Digite 3 se quer fahrenheit para Celsius\n");
    scanf("%i", &escolha);

    if (escolha == 1){
        float x;
        printf("Digite a kilometragem: ");
        scanf("%f", &x);
        
        float m = x * 1000;
        printf("%.1f em metros e: %.1f", x, m);

    }else if(escolha == 2){
        float x;
        printf("Digite os metros: ");
        scanf("%f", &x);
        
        float km = x / 1000;
        printf("%.1f em Km e: %.1f", x, km);

    }else if(escolha == 3 ){
        float g;
        printf("Digite o(s) grau(s) Celcius para Fahrenheit: ");
        scanf("%f", &g);

        float f = (g * 1.8) + 32;

        printf("%.1f °C em Fahrenheit e: %f", g, f);
    }
    return 0;
}