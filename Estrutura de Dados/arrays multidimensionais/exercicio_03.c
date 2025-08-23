/*
3. Construa um programa em linguagem C que execute as seguintes
funcionalidades:
a) Declare uma matriz quadrada de inteiros de N linhas e N colunas.
b) Preencha essa matriz com dados lidos do teclado.
c) Imprima na tela a matriz obtida.
d) Inverta os dados armazenados na matriz segundo a regra: os dados
acima e abaixo da diagonal principal deverão trocar de lugar com seus
respectivos correspondentes; os dados armazenados na diagonal
principal não deverão ser alterados.
e) Imprima na tela a matriz resultante.
*/

#include <stdio.h>
#define N 4

int main()
{
    int matriz[N][N];
    int linha, coluna;
    int aux;

    for(linha = 0; linha < N; linha++)
    {
        for(coluna = 0; coluna < N; coluna++)
        {
            printf("Preencha com um inteiro o valor do indice[%i][%i]: \n", linha, coluna);
            scanf("%i", &matriz[linha][coluna]);
        }
    }
    for(linha = 0; linha< N; linha++){
        for(coluna = 0; coluna < N; coluna++){
            printf("[%i]", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(linha = 0; linha< N; linha++){
        for(coluna = 0; coluna < N; coluna++){
            
            if(linha < coluna)
            {
                aux = matriz[linha][coluna];
                matriz[linha][coluna] = matriz[coluna][linha];
                matriz[coluna][linha] = aux;

            } 
        }
    }
    for(linha = 0; linha< N; linha++){
        for(coluna = 0; coluna < N; coluna++){
            printf("[%i]", matriz[linha][coluna]);
        }
        printf("\n");
    }


    return(1);

}