// Faça um programa em C que leia um verbo e imprima a conjugação no presente do
// indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRAMO, TU PROGRAMAS,
// ELE PROGRAMA, NÓS PROGRAMAMOS, VÓS PROGRAMAIS E ELES PROGRAMAM).
#include <stdio.h>
#include <string.h>

int main() {
  // ar
  char eu_a[2] = {'o'};
  char tu_a[3] = {'a', 's'};
  char ele_a[2] = {'a'};
  char nos_a[5] = {'a', 'm', 'o', 's'};
  char vos_a[4] = {'a', 'i', 's'};
  char eles_a[3] = {'a', 'm'};
  // er
  char eu_e[2] = {'o'};
  char tu_e[3] = {'e', 's'};
  char ele_e[2] = {'e'};
  char nos_e[5] = {'e', 'm', 'o', 's'};
  char vos_e[4] = {'e', 'i', 's'};
  char eles_e[3] = {'e', 'm'};
  // ir
  char eu_i[2] = {'o'};
  char tu_i[3] = {'e', 's'};
  char ele_i[2] = {'e'};
  char nos_i[5] = {'i', 'm', 'o', 's'};
  char vos_i[4] = {'i', 's'};
  char eles_i[3] = {'e', 'm'};

  char palavra[20];
  int n;

  printf("Insira a palavra:\n");
  scanf("%s", palavra);

  n = strlen(palavra);

  if (palavra[n - 1] == 'r') {
    if (palavra[n - 2] == 'a') {
      palavra[n - 2] = '\0';

      printf("Eu %s%s\n", palavra, eu_a);
      printf("Tu %s%s\n", palavra, tu_a); 
      printf("Ele %s%s\n", palavra, ele_a);
      printf("Nos %s%s\n", palavra, nos_a);
      printf("Vos %s%s\n", palavra, vos_a);
      printf("Eles %s%s\n", palavra, eles_a);
    }
    if (palavra[n - 2] == 'e') {
      palavra[n - 2] = '\0';

      printf("Eu %s%s\n", palavra, eu_e);
      printf("Tu %s%s\n", palavra, tu_e); 
      printf("Ele %s%s\n", palavra, ele_e);
      printf("Nos %s%s\n", palavra, nos_e);
      printf("Vos %s%s\n", palavra, vos_e);
      printf("Eles %s%s\n", palavra, eles_e);
    }
    if (palavra[n - 2] == 'i') {
      palavra[n - 2] = '\0';

      printf("Eu %s%s\n", palavra, eu_i);
      printf("Tu %s%s\n", palavra, tu_i); 
      printf("Ele %s%s\n", palavra, ele_i);
      printf("Nos %s%s\n", palavra, nos_i);
      printf("Vos %s%s\n", palavra, vos_i);
      printf("Eles %s%s\n", palavra, eles_i);
    }
  } else
    printf("\aPalavra não terminada em r");

  return 0;
}
