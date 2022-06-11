/*Faça um programa em C que leia a quantidade e o preço de 10 produtos de um
 * nota fiscal e imprima o valor total de cada produto e o valor total da
 * nota.*/
#include <stdio.h>

int main() {

  float p[9], q = 0, nota = 0;

  for (int i = 0; i < 10; i++) {
    printf("insira o valor do produto: ");
    scanf("%f", &p[i]);
    printf("insira a quantidade do profuto: ");
    scanf("%f", &q);
    p[i] = p[i] * q;
    nota = nota + p[i];
  }
  for (int i = 0; i < 10; i++) {
    printf("\n o preço do produto %d é R$%.2f", i + 1, p[i]);
  }
  printf("\n nota = %f", nota);
  return 0;
}
