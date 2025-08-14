/* Inverter Vetor
Leia 6 números e armazene em um vetor. Depois, imprima o vetor na ordem inversa.*/
#include <stdio.h>
int main(){
    int i, numeros[6];
    printf("Digite 6 numeros:\n");
    for(i = 0; i < 6; i++){
        scanf("%i", &numeros[i]); 
    }
    printf("Os numeros na ordem inversa sao:\n");
    for(i = 5; i >= 0; i--){
        printf("%i ", numeros[i]); 
    }
    printf("\n");
    return 0;
}