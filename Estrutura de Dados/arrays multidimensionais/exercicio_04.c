/*
4. Construa um programa em linguagem C que execute as seguintes
funcionalidades:
a) Defina uma matriz quadrada de números inteiros com 15 linhas e 15
colunas;
b) Solicite ao usuário que preencha através do teclado cada uma das células
desta matriz;
c) Solicite ao usuário que forneça um número inteiro lido do teclado e
multiplique a diagonal principal por este número;
d) Solicite ao usuário que forneça um outro número inteiro lido do teclado e
multiplique as células da matriz que estão acima da diagonal principal
por este número;
e) Solicite ao usuário que forneça mais um número inteiro lido do teclado e
multiplique as células da matriz que estão abaixo da diagonal principal
por este número;
f) Imprima na tela a nova matriz resultante. 
*/

#include <stdio.h>
#define MAX 4

  int main(){

    int matriz[MAX][MAX];
    int linha, coluna;
    int valor1, valor2, valor3;
    for(linha = 0; linha< MAX; linha++){
        for(coluna = 0; coluna < MAX; coluna++){
            printf("Digite o valor da celula de indice[%i][%i]:\n", linha, coluna);
            scanf("%i", &matriz[linha][coluna]);
        }
    }

    for(linha = 0; linha< MAX; linha++){
        for(coluna = 0; coluna < MAX; coluna++){
            printf("[%i]", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("Digite um valor para multiplicar a diagonal principal: \n");
    scanf("%i", &valor1);
    printf("Digite um valor para multiplicar as celulas acima da diagonal principal: \n");
    scanf("%i", &valor2);
    printf("Digite um valor para multiplicar as celulas abaixo da diagonal principal: \n");
    scanf("%i", &valor3);
    
    for(linha = 0; linha< MAX; linha++){
        for(coluna = 0; coluna < MAX; coluna++){
            if(linha < coluna){
                matriz[linha][coluna] *= valor2;
            }
            else{
                if(linha > coluna)
                {
                    matriz[linha][coluna] *= valor3;

                }
                else
                {
                    matriz[linha][coluna] *= valor1;

                }
            }

        }
    }
    
    for(linha = 0; linha< MAX; linha++){
        for(coluna = 0; coluna < MAX; coluna++){
            printf("[%i]", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return(1);
  }