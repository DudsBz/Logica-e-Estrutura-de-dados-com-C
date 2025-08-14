/*08. Construa um programa em linguagem C que execute as seguintes tarefas:
a) declare três arrays com 5 posições cada um. Os arrays deverão ser denominados “altura” (do
tipo float), “peso” (tipo float) e “IMC” (também do tipo float).
b) cada posição do array “altura” deverá ser preenchido com dados lidos do teclado;
c) cada posição do array “peso” deverá ser preenchido com dados lidos do teclado;
d) o programa deverá preencher cada posição do array “IMC”
e) ao final os três arrays deverão ser impressos na tela.*/


#define TAM 5
#include <stdio.h>
int main(){

    float altura[TAM], peso[TAM], imc[TAM];
    int indice;
    for(indice = 0; indice<=TAM-1; indice++){
        printf("Digite a altura da pessoa[%i]", indice);
        scanf("%i", &altura[indice]);
    }
    for(indice = 0; indice<=TAM-1; indice++){
        printf("Digite o peso da pessoa[%i]", indice);
        scanf("%i", &altura[indice]);
    }
    for(indice = 0; indice<=TAM-1; indice++){
        
    }





    return(1);
}