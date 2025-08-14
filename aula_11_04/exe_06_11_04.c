/*
Validação com DO-WHILE: Peça ao usuário uma senha (número inteiro). 
Enquanto ele não digitar a senha correta (por exemplo, 1234), continue pedindo. 
Quando acertar, exiba “Acesso permitido”.
*/
#include <stdio.h>
int main(){
    
    int senha = 1234;
    int tentativa;
    do{
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        if (tentativa != senha){
            printf("Senha incorreta. Tente novamente.\n");
        }
    }while(tentativa != senha);
    printf("Senha correta!\nAcesso permitido.\n");
    return 0;
}