/*
4) Programa que recebe a distância (km) e o tempo (hora) que foi necessário para percorrer um trajeto.
 O programa deve retornar a velocidade média deste trajeto.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float tempo;
    
    float distancia;
    printf("Que distancia em Km você percorreu?");
    scanf("%f", &distancia);

    printf("Quanto tempo voce demorou para chegar?");
    scanf("%f", &tempo);

    float velo_med = tempo / distancia;
    printf("A velocidade media percorrida foi de %.2f", velo_med);

}