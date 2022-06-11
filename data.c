// Faça um programa em C que leia uma estrutura contendo dia, mês e ano e
// imprima a data tanto no formato BR (dd/mm/aaaa) quanto no formato US
// (mm/dd/aaaa).
#include <stdio.h>
#include <string.h>
int main() {

  struct data_t {
    int dia;
    int mes;
    int ano;
  } data;

  printf("insira o dia: ");
  scanf("%d", &data.dia);
  printf("insira o mês: ");
  scanf("%d", &data.mes);
  printf("insira o ano: ");
  scanf("%d", &data.ano);

  if (data.dia >= 1 && data.dia <= 31) {
    if (data.mes >= 1 && data.mes <= 12) {
      printf(" Br--%d/%d/%d\n", data.dia, data.mes, data.ano);
      printf(" Us--%d/%d/%d\n", data.mes, data.dia, data.ano);
    } else {
      printf("essa não é uma data valida");
    }
  } else {
    printf("essa não é uma data valida");
  }
  return 0;
}
