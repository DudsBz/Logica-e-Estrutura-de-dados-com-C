/*
Faça um programa que receba a idade do atleta e retorne a sua categoria no esporte.
Para tal, considere a tabela abaixo:
*/
#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);
    
    if (idade == 5 || idade == 6) {
        printf("Categoria: Mirim A\n");
    } else if (idade == 7 || idade == 8) {
        printf("Categoria: Mirim B\n");
    } else if (idade == 9 || idade == 10) {
        printf("Categoria: Mirim C A\n");
    } else if (idade == 11 || idade == 12) {
        printf("Categoria: Infantil B\n");  
    } else if (idade == 13 || idade == 14) {
        printf("Categoria: Infanto-Juvenil\n");
    } else if (idade > 14 && idade <= 17) {
        printf("Categoria: Juvenil\n");
    } else if(idade > 17 && idade <= 35) {
        printf("Categoria: Adulto\n");
    }else if(idade > 35) {
        printf("Categoria: Master\n");
    }
    return 0;
}