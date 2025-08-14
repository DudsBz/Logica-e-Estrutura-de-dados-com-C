/*Contar Vogais
Crie um programa que conte quantas vogais existem em uma string digitada pelo usuário.*/
#include <stdio.h> 
#include <string.h> 
int main() {
    char str[100]; 
    int i, cont = 0; 
    printf("Digite uma string:\n");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';

    for(i = 0; i < strlen(str); i++) { // Percorre cada caractere da string
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            cont++;
        }
    }
    printf("A quantidade de vogais na string e: %i\n", cont); 
    return 0;
}