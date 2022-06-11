// Faça um programa em C que leia uma frase de até 30 caracteres preenchendo uma
// matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna.
#include <stdio.h>
#include <string.h>
int main() {

  char frase[30] = "------------------------------";
  char matrix[6][5];

  printf("digite a frase:\n");
  fgets(frase, 30, stdin);

  memmove(matrix, frase, 30);

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%c \t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
