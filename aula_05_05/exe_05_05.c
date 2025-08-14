/*Contar Ocorrências de um Número
Leia um vetor de 15 números e um valor x. Conte quantas vezes x aparece no vetor e informe ao usuário.*/
#include <stdio.h>
int main(){
    int i, cont = 0, numeros[15], x;
    printf("Digite 15 numeros:\n");
    for(i = 0; i < 15; i++){
        scanf("%i", &numeros[i]); 
    }
    printf("Digite o numero que deseja contar:\n");
    scanf("%i", &x); 
    for(i = 0; i < 15; i++){
        if(numeros[i] == x){ 
            cont++; 
        }
    }
    printf("O numero %i aparece %i vezes no vetor.\n", x, cont); 
    return 0;
}