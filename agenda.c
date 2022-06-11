// Faça um programa em C que leia nome e telefone de 10 contatos, e depois
// imprima todos os contatos no formato "nome - (telefone)".
#include <stdio.h>
#include <string.h>
int main() {

  struct contato_t {
    char nome[31];
    int telefone;
  };

  struct contato_t contatos[10];

  for (int i = 0; i < 10; i++) {
    printf("Entre com o nome: ");
    scanf("%s", contatos[i].nome);
    printf("entre com o fone: ");
    scanf("%d", &contatos[i].telefone);
  };
  printf("---contatos---\n");
  for (int i = 0; i < 10; i++) {
    printf("%s - (%d)\n", contatos[i].nome, contatos[i].telefone);
  };
  return 0;
}
