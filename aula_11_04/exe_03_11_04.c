/*
Tabuada (DO-WHILE): Peça ao usuário um número inteiro e mostre sua tabuada de 1 a 10 utilizando o laço do-while.
*/
#include <stdio.h>
int main(){

    int n = 1;
    int i = 1;
    REPETIR:
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    do{
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }while(i <= 10);
    printf("Deseja repetir? (1 - Sim, 0 - Nao): ");
    int repetir;
    scanf("%d", &repetir);
    if(repetir == 1){
        i = 1; // Reinicia o contador
        goto REPETIR; // Volta para o inicio
    }else{
        printf("Programa encerrado.\n");
    }


    return 0;
}