// Faça um programa em C que leia uma string e a imprima em maísculo e em
// minúsculo.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char string[31];

  printf("insira uma frase: \n");
  scanf("%s", string);

  for (int i = 0; i < strlen(string); i++) {
    printf("%c", toupper(string[i]));
  }
  printf("\n");
  for (int i = 0; i < strlen(string); i++) {
    printf("%c", tolower(string[i]));
  }
  // string2[31] = toupper(string[31]);
}
