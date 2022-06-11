// Faça um programa em C que leia matricula e email de 10 alunos, e depois
// localize o email do aluno a partir de uma matrícula lida.
#include <stdio.h>
#include <string.h>
int main() {

  struct alunos_t {
    char nome[30];
    int matricula;
    char email[60];
  } alunos[3];
  int busca;

  printf("atribuição das informações dos alunos:\n\n");
  for (int i = 0; i < 3; i++) {
    printf("\ninsira o nome: ");
    scanf("%s", alunos[i].nome);
    printf("insira a matricula: ");
    scanf("%d", &alunos[i].matricula);
    printf("insira o email: ");
    scanf("%s", alunos[i].email);
  }
  printf("\ninsira a matricula do aluno desejado: ");
  scanf("%d", &busca);

  for (int i = 0; i < 3; i++) {
    if (busca == alunos[i].matricula) {
      printf("\nnome - %s \nmatricula - %d \nemail - %s", alunos[i].nome,
             alunos[i].matricula, alunos[i].email);
    }
  }

  return 0;
}
