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

  if (data.mes >= 1 && data.mes <= 12) {
    if (data.mes == 2) {
      if (data.dia >= 1 && data.dia <= 29) {
        printf(" Br--%d/%d/%d\n", data.dia, data.mes, data.ano);
        printf(" Us--%d/%d/%d\n", data.mes, data.dia, data.ano);
      } else {
        printf("essa não é uma data valida");
      }
    } else if (data.mes != 2) {
      if (data.dia >= 1 && data.dia <= 31) {
        printf(" Br--%d/%d/%d\n", data.dia, data.mes, data.ano);
        printf(" Us--%d/%d/%d\n", data.mes, data.dia, data.ano);
      } else {
        printf("essa não é uma data valida");
      }
    }
  } else {
    printf("essa não é uma data valida");
  }
  return 0;
}
