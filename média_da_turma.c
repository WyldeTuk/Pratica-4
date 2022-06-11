/*Faça um programa em C que leia as notas de 10 alunos, calcule a média da
turma e contabilize quantos alunos estão com a nota acima da média.*/

#include <stdio.h>

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define RESET "\x1B[0m"

int main() {

  float notas[10][2];
  printf("insira as notas dos alunos sequencialmente:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%f", &notas[i][j]);
    }
  }

  for (int i = 0; i < 10; i++) {

    float media = 0.4 * notas[i][0] + 0.6 * notas[i][1];
    printf("\n aluno %d - A1 =" YEL " %.1f" RESET ", A2 =" YEL "%.1f" RESET
           ", Media = " YEL "%.1f" RESET,
           i, notas[i][0], notas[i][1], media);

    if (media >= 5) {
      printf(GRN "--- AP" RESET);
    } else {
      printf(RED "--- R" RESET);
    }
  }

  return 0;
}
