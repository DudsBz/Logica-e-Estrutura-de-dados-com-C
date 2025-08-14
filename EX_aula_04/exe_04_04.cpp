#include <stdio.h>
int main(){

    float altura, peso;
    char sexo;
    
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo: ('m' para masculino e 'f' para feminino )\n");
    scanf(" %c", &sexo);
    float imc = peso/(altura*altura);
    printf("Este e o teu IMC: %.2f", imc);
    if(sexo == 'm'){
        if(imc < 20.7){
            printf("Voce esta abaixo do peso ideal");
            printf("O peso ideal seria de 20.7 ate 26.4");
        }else if(imc >= 20.7 && imc<=26.4){
            printf("Voce esta no peso ideal para o seu sexo");
        }else if(imc >= 26.5 && imc <=27.8){
            printf("Voce esta um pouco acima do peso ideal");
            printf("O peso ideal seria de 20.7 ate 26.4");
        }else if(imc >= 27.9 && imc <= 31.1){
            printf("Voce esta muito acima do peso ideal");
            printf("O peso ideal seria de 20.7 ate 26.4");
        }else{
            printf("Voce esta obeso");
            printf("O peso ideal seria de 20.7 ate 26.4");
        }
    }else if(sexo == 'f'){
        if(imc < 19.1){
            printf("Voce esta abaixo do peso ideal");
            printf("O peso ideal seria de 19.1 ate 25.8");
        }else if(imc >= 19.1 && imc<=25.8){
            printf("Voce esta no peso ideal para o seu sexo");
        }else if(imc >= 26.5 && imc <=27.8){
            printf("Voce esta um pouco acima do peso ideal");
            printf("O peso ideal seria de 19.1 ate 25.8");
        }else if(imc >= 27.9 && imc <= 31.1){
            printf("Voce esta muito acima do peso ideal");
            printf("O peso ideal seria de 19.1 ate 25.8");
        }else{
            printf("Voce esta obeso");
            printf("O peso ideal seria de 19.1 ate 25.8");
        }
    }else{
        printf("Digito invalidado!");
    }

    return 0;
}