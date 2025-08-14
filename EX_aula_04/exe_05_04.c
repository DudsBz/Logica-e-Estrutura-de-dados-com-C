#include <stdio.h>


/*Faça um programa para responder se uma pessoa pode aposentar, com base nas regras abaixo:
 - Mulheres: 58 anos de idade e 30 anos de contribuição
 - Homens: 63 anos de idade e 35 anos de contribuição
Caso a pessoa ainda não possa se aposentara, informar quanto tempo falta.
*/
int main(){
    int idade, tempo_contribuicao, anos_faltando;
    char sexo;
    if(idade < 0 || idade > 120){
        printf("Idade inválida\n");
        return 1;
    }
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de contribuicao: ");
    scanf("%d", &tempo_contribuicao);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    if(sexo != 'M' && sexo != 'F'){
        printf("Sexo inválido\n");
        return 1;
    }
    if((sexo == 'F' && idade >= 58 && tempo_contribuicao >= 30) 
    || (sexo == 'M' && idade >= 63 && tempo_contribuicao >= 35))
    {
        printf("Pode se aposentar\n");
    }else{
        if(sexo == 'F'){
            if(idade < 58){
                anos_faltando = 58 - idade;
                printf("Faltam %d anos para se aposentar\n", anos_faltando);
            }else{
                anos_faltando = 30 - tempo_contribuicao;
                printf("Faltam %d anos de contribuicao para se aposentar\n", anos_faltando);
            }
        }else{
            if(idade < 63){
                anos_faltando = 63 - idade;
                printf("Faltam %d anos para se aposentar\n", anos_faltando);
            }else{
                anos_faltando = 35 - tempo_contribuicao;
                printf("Faltam %d anos de contribuicao para se aposentar\n", anos_faltando);
            }
        }
    }
    return 0;
}