/*Um programa em C que leia o número de mês, valide o número com os meses
definidos por uma enumeração e imprima o nome do mês.*/
#include <stdbool.h>
#include <stdio.h>

enum meses { jan = 1, feb, mar, abr, mai, jun, jul, ago, set, out, nov, dez };
char nomes[12][10] = {"janeiro",  "fevereiro", "março",    "abril",
                      "maio",     "junho",     "julho",    "agosto",
                      "setembro", "outubro",   "novembro", "dezembro"};

int main() {

  enum meses mes;

  printf("entre com o mês: ");
  scanf("%d", &mes);

  if (mes >= jan && mes <= dez) {
    printf("mês eh valido: %s", nomes[mes - 1]);

  } else {
    printf("mês não valido");
  }

  return 0;
}
