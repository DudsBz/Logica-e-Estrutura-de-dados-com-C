/*Faça um programa que receba um valor inteiro entre 0 e 24, referente à hora.
Com base no horário, o programa deve retornar: 

Bom dia (0-12), 
Boa tarde (12-18) 
ou Boa noite (18-24).
*/

#include <stdio.h>

int main() {
    int hora;
    
    printf("Digite a hora (0-24): ");
    scanf("%d", &hora);
    
    if (hora >= 0 && hora < 12) {
        printf("Bom dia!\n");
    } else if (hora >= 12 && hora < 18) {
        printf("Boa tarde!\n");
    } else if (hora >= 18 && hora <= 24) {
        printf("Boa noite!\n");
    } else {
        printf("Hora inválida!\n");
    }
    
    return 0;
}