/*Média e Quantidade Acima da Média
Leia 8 números reais em um vetor, calcule a média e exiba quantos números estão acima da média.*/
#include <stdio.h>
int main(){
    int i, cont = 0;
    float soma = 0, media, numeros[8];
    printf("Digite 8 numeros reais:\n");
    for(i = 0; i < 8; i++){
        scanf("%f", &numeros[i]); 
        soma += numeros[i]; 
    }
    media = soma / 8; 
    printf("A media e: %.2f\n", media);
    for(i = 0; i < 8; i++){
        if(numeros[i] > media){ 
            cont++; 
        }
    }
    printf("Quantidade de numeros acima da media: %i\n", cont);
    return 0;
}