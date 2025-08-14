#include <stdio.h>  
int main() {
    int age;
    printf("Hi, wt old are y?\n");
    scanf("%d", &age);
    if(age >= 40 && age <=60){
        printf("Ho ho ho");
    }else if(age <= 39 && age >=20){
        printf("Okay, thats fine");
    }else if(age <=19){
        printf("Gugu dada");
    }else{
        printf("you die");
    }
    //Para o programa retornar algo para validar o código (se o programa rodar, retorne 0)
    return 0;
}
