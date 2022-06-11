/*Faça um programa em C que preencha uma matriz com 10 números, depois leia um
 * número e localize a posição dele na matriz.*/

#include <stdio.h>

int main() {
  int numeros[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int valor;

  for (int i = 0; i < 10; i++)
    scanf("%d", &numeros[i]);

  for (int i = 0; i < 10; i++) {
    printf("%d ", numeros[i]);
  }

  printf("\nValor deseja localizar: ");
  scanf("%d", &valor);

  for (int i = 0; i < 10; i++) {
    if (numeros[i] == valor) {
      printf("\no numero desejado está na posicão %d da matriz", i);
    }
  }
  return 0;
}
