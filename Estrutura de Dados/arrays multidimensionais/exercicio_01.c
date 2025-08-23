/*
1. Construa um programa em linguagem C que execute as seguintes
funcionalidades:
a) Declare 3 matrizes de inteiros, cada uma com 30 linhas e 40 colunas,
denominadas matriz1, matriz2 e matriz3.
b) Armazene valores inteiros digitados pelo usuário em cada uma das
células da matriz1.
c) Armazene valores inteiros digitados pelo usuário em cada uma das
células da matriz2.
d) A seguir multiplique cada uma das células da matriz1 pela célula
correspondente da matriz2, armazenando o resultado na célula
correspondente da matriz3.
*/
  
  
#include <stdio.h>
#define LIN 3
#define COL 4


int main(){

  int matriz1[LIN][COL];
  int matriz2[LIN][COL];
  int matriz3[LIN][COL];
  int i, j;
  
  for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
          printf("Digite um valor inteiro para a celula[%i][%i] da matriz1:\n", i, j);
          scanf("%i", &matriz1[i][j]);
      }
  } 
  for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
          printf("Digite um valor inteiro para a celula[%i][%i] da matriz2:\n", i, j);
          scanf("%i", &matriz2[i][j]);
      }
  }
  
  for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
          matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
      }
  }
  printf("\n");
  printf("Matriz 1");
  printf("\n");
  for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
          printf("%i  ", matriz1[i][j]);
      }
    printf("\n");
  }
  printf("\n");
  printf("Matriz 2");
  printf("\n");
  for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
          printf("%i  ", matriz2[i][j]);
      }
    printf("\n");
  }
  printf("\n");
  printf("Matriz 3");
  printf("\n");
  for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
          printf("%i  ", matriz3[i][j]);
      }
    printf("\n");
  }

  return(1);
  }