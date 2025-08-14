/*Verificar Palíndromo
Verifique se uma palavra é um palíndromo (ex: “radar”, “ana”).*/
#include <stdio.h>
#include <string.h> 
int main() {
    char str[100]; 
    int i, palindromo = 1; 
    printf("Digite uma palavra:\n");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str); 

    for(i = 0; i < len / 2; i++) { 
        if(str[i] != str[len - i - 1]) { 
            palindromo = 0; 
            break;
        }
    }

    if(palindromo) {
        printf("A palavra e um palindromo.\n"); 
    } else {
        printf("A palavra nao e um palindromo.\n"); 
    }

    return 0;
}