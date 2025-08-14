/*
Crie um programa que simule um sistema bancário simples. 
O usuário poderá realizar operações como depósito, saque, transferência e consulta de saldo por meio de um menu interativo.
Regras e Funcionalidades:
Cada cliente tem um saldo inicial de R$1000,00.

O sistema deve exibir um menu com as seguintes opções:


1 - Consultar saldo

2 - Depositar dinheiro

3 - Sacar dinheiro

4 - Sair


O usuário pode escolher uma das opções e realizar a operação correspondente.

Validação: Não deve ser possível sacar ou transferir um valor maior do que o saldo disponível.

O programa deve repetir o menu até que o usuário escolha a opção de sair.
*/
#include <stdio.h>
int consultar_saldo(float saldo){
    saldo = 1000.00;
    printf("Seu saldo e: %.2f\n", saldo);
    return saldo;
}
int depositar(float saldo){
    float deposito;
    printf("Digite o valor a ser depositado: ");
    scanf("%f", &deposito);
        if (deposito <= 0) {
            printf("Valor invalido. Tente novamente.\n");
            
        }else{
            saldo += deposito;
            printf("Deposito realizado com sucesso! Seu novo saldo e: %f\n", saldo);
            
        }
    return saldo;
}
int sacar(float saldo){
    float saque;
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque);
        if (saque > saldo) {
            printf("Saldo insuficiente. Tente novamente.\n");
            
        }else if (saque <= 0) {
            printf("Valor invalido. Tente novamente.\n");
            
        }else{
            saldo -= saque;
            printf("Saque realizado com sucesso! Seu novo saldo e: %f\n", saldo);
            
        }
    return saldo;
}
int transferir(float saldo){
    float transferencia;
    printf("Digite o valor a ser transferido: ");
    scanf("%f", &transferencia);
        if (transferencia > saldo) {
            printf("Saldo insuficiente. Tente novamente.\n");
            
        }else if (transferencia <= 0) {
            printf("Valor invalido. Tente novamente.\n");
            
        }else{
            saldo -= transferencia;
            printf("Transferencia realizada com sucesso! Seu novo saldo e: %.2f\n", saldo);
            
        }
    return saldo;
}
int exibir_menu(int escolha){
    printf("Escolha uma acao bancaria:\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Depositar dinheiro\n");
    printf("3 - Sacar dinheiro\n");
    printf("4 - Transferir dinheiro\n");
    printf("5 - Sair\n");
    scanf("%i", &escolha);

    float saldo = 1000.00;
    switch (escolha)
    {
        case 1:
            consultar_saldo(1000.00);
            break;
        case 2:
            depositar(saldo);
            break;
        case 3:
            sacar(saldo);
            break;
        case 4:
            transferir(saldo);
            break;
        case 5:
            printf("Saindo do sistema. Ate logo!\n");
            break;   
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
        return 0;
        }
    return escolha;
}
int main(){
    int opcao = 1;
    while (opcao != 0) 
    {
        int escolha;
        exibir_menu(escolha);
        printf("Deseja continaur? (1 - Sim, 0 - Nao): ");
        scanf("%d", &escolha);
        if (escolha == 0) {
            opcao = 0;
            printf("Saindo do sistema. Ate logo!\n");
            break;
        }
    }
    return 0;
}