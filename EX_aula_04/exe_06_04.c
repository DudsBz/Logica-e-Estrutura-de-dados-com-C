/*Você foi contratado para desenvolver uma parte de um sistema de recomendação de filmes. 

Sua tarefa é criar um programa simples que exibe Filmes com base no gênero escolhido pelo usuário. 

Apresente ao usuário o seguinte menu de gêneros:

Escolha um gênero de filme:
1 - Ação
2 - Comédia
3 - Drama
4 - Ficção Científica
5 - Terror
2 - O usuário deve digitar o número correspondente ao gênero desejado.

3 - Utilize a estrutura switch case para exibir uma lista com 3 sugestões de filmes para o gênero escolhido.

4 - Se a opção for inválida, exiba uma mensagem apropriada.

5 - Ao final, pergunte ao usuário se ele deseja continuar. Se a resposta for "sim", o programa deve apresentar a tela de gênero novamente, para isso, use uma função. Caso contrário, o programa deve ser encerrado.
Para os dados a serem usados, considere a lista abaixo:

Filmes de Ação:

Mad Max: Estrada da Fúria
John Wick
Missão Impossível
            

Filmes de Comédia:

As Branquelas
O Máskara
Se Beber, Não Case
               

Filmes de Drama:

À Procura da Felicidade
Clube da Luta
O Curioso Caso de Benjamin Button
       

Filmes de Ficção Científica:

Interestelar
Matrix
Blade Runner 2049


Filmes de Terror:

Invocação do Mal
It: A Coisa
O Exorcista
*/


#include <stdio.h>


int exibir_menu(int escolha){
    printf("Escolha um genero de filme:\n");
    printf("1 - Acao\n");
    printf("2 - Comedia\n");
    printf("3 - Drama\n");
    printf("4 - Ficcao Cientifica\n");
    printf("5 - Terror\n");
    scanf("%i", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Filmes de Acao:\n");
        printf("1. Mad Max: Estrada da Furia\n");
        printf("2. John Wick\n");
        printf("3. Missao Impossivel\n");
        break;
    case 2:
        printf("Filmes de Comedia:\n");
        printf("1. As Branquelas\n");
        printf("2. O Maskara\n");
        printf("3. Se Beber, Nao Case\n");
        break;
    case 3:
        printf("Filmes de Drama:\n");
        printf("1. A Procura da Felicidade\n");
        printf("2. Clube da Luta\n");
        printf("3. O Curioso Caso de Benjamin Button\n");
        break;
    case 4:
        printf("Filmes de Ficcao Cientifica:\n");
        printf("1. Interestelar\n");
        printf("2. Matrix\n");
        printf("3. Blade Runner 2049\n");
        break;
    case 5:
        printf("Filmes de Terror:\n");
        printf("1. Invocacao do Mal\n");
        printf("2. It: A Coisa\n");
        printf("3. O Exorcista\n");
        break;   
    default:
        printf("Opcao invalida. Tente novamente.\n");
        break;

    return 0;
    }
}
int main(){
    while (exibir_menu)
    {
        int escolha;
        exibir_menu(escolha);
        printf("Deseja escolher outro genero? (1 - Sim, 0 - Nao): ");
        scanf("%d", &escolha);
        if (escolha == 0) {
            break;
        }
    }
    return 0;
}