/*
 Série de Fibonacci até N (WHILE): 
 Dado um número N, imprima os termos da série de Fibonacci até que o valor ultrapasse N.
*/
#include <stdio.h>
int main(){
    //numero que o usuario coloca
    int n =0;
    //a e b são os dois primeiros números da série de Fibonacci
    int a = 0; 
    int b = 1; 
    //proximo é o próximo número da série
    int proximo;
    printf("Digite um numero N: ");
    scanf("%d", &n);
    printf("Serie de Fibonacci ate %d:\n", n);
    while(a <= n){
        // printa a
        printf("%d ", a);
        // proximo é a soma dos dois primeiros números da série
        proximo = a + b;
        // a vale o proximo numero agora
        a = b;
        // b vale o proximo numero agora para atualizar "a"
        b = proximo;
    }
    //primeira rodada do while comentado:
    /* while(a <= n){
        // printa a (a vale 0)
        printf("%d ", a);
        // proximo é a soma dos dois primeiros números da série (0 + 1 = 1)
        proximo = a + b;
        // a vale o proximo numero agora (a vale 1)
        a = b;
        // b vale o proximo numero agora para atualizar "a" (b vale 1)
        b = proximo;
    } */
    
    return 0;
}