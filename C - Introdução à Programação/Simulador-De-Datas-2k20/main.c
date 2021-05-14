#include <stdio.h>

int main() {

  int a1, a2, m1, m2, d1, d2;
  int dif_d, dif_a, dif_t, dif_m = 0;
  int temp, bissextos = 0, anderson = 0;

  while (anderson == 0) {
    // Boas-vindas e sair do programa

    printf("\nBem-vindo ao D.A.T.A.S.DD™ by COELHO Enterprises. Pressione 1 para continuar e 0 para sair\n\n>");
    scanf(" %d", &temp);

    if (temp == 0) {

      break;
    } else {}

    printf("\nInforme a data mais nova, no formato: dd mm aa\n\n>");
    scanf(" %d %d %d", &d1, &m1, &a1);
    printf("\nInforme a data mais antiga, no formato: dd mm aa\n\n>");
    scanf(" %d %d %d", &d2, &m2, &a2);

    // Verificando a diferença de anos
    
    for (temp = a2; temp < a1; temp++) {

      // Verificando se é bissexto

      if ((temp % 4 == 0 && temp % 100 != 0) || temp % 400 == 0) {

        bissextos ++;
      }
    }

    dif_a = (a1 - a2) * 365 + bissextos;

    // Verificando a diferença de meses

    if (m1 > m2) {

      for (temp = m2; temp < m1; temp ++) {

        if (temp == 1 || temp == 3 || temp == 5 || temp == 7 || temp == 8 || temp == 10 || temp == 12) {

          dif_m += 31;
        } else if (temp == 2) {

          dif_m += 28;
        } else {

          dif_m += 30;
        }
      }
    } else {

      for (temp = m1; temp < m2; temp ++) {

        if (temp == 1 || temp == 3 || temp == 5 || temp == 7 || temp == 8 || temp == 10 || temp == 12) {

          dif_m -= 31;
        } else if (temp == 2) {

          dif_m -= 28;
        } else {

          dif_m -= 30;
        }
      }
    }

    // Verificando a diferença entre dias

    dif_d = d1 - d2;

    // Somando tudo

    dif_t = dif_a + dif_m + dif_d;

    printf("\nEntre %d/%d/%d e %d/%d/%d há %d dias\n", d2, m2, a2, d1, m1, a1, dif_t);
  }
  return 0;
}