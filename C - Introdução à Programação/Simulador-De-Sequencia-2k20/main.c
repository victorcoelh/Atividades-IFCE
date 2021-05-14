#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

  // setup
  setlocale(LC_ALL, "");
  int temp;
  int anderson = 0;

  printf("Você quer calcular P.A ou P.G.?\n (1) - Progressão Aritmética\n (2+) - Progressão Geométrica\n\n>");
  scanf(" %d", &temp);

  if(temp == 1) {
    // p.a.
    while (anderson == 0) {
      printf("\nBem vindo ao simulador de progressão arimética 2020 by COELHO Enterprises\n\n");
      printf("Você quer...\n (1) - A sequência\n (2) - A razão\n (3) - O enésimo termo\n (4) - Sair\n\n>");
      scanf(" %d", &temp);

      // mostrando a sequência
      if (temp == 1) {

        int a1, r, lim, i;
        printf("\nInsira o primeiro termo e, em seguida, a razão, e, por último, até qual termo você quer:\n\n>");
        scanf(" %d %d %d", &a1, &r, &lim);

        printf("\nA sequência é: ");

        for (i = 0; i < lim; i++) {

          if (i != lim - 1) {

          printf("%d, ", a1);
          } else {

            printf("%d", a1);
          }

          a1 += r;
        }

        printf("\n");

      // achando a razão
      } else if (temp == 2) {

        double a1, an, n;
        double r;
        printf("\nInsira o primeiro termo, o termo que você conhece, e a posição dele na sequência\n\n>");
        scanf(" %lf %lf %lf", &a1, &an, &n);

        r = (an - a1) / (n - 1);
        printf("\nA razão é: %.3lf\n", r);

      // achando o termo An
      } else if (temp == 3) {

        int a1, r, n, an;
        printf("\nInsira o primeiro termo, a razão, e a posição do termo que você deseja\n\n>");
        scanf(" %d %d %d", &a1, &r, &n);
        
        an = a1 + r * (n - 1);
        printf("O termo %d é: %d", n, an);

      // fechando o programa
      } else {break;}
    }

  } else {

    while(anderson == 0) {
      printf("\nBem vindo ao simulador de progressão geométrica 2020 by COELHO Enterprises\n\n");
      printf("Você quer...\n (1) - A sequência\n (2) - A razão\n (3) - O enésimo termo\n (4) - Sair\n\n>");
      scanf(" %d", &temp);

      // mostrando a sequência
      if (temp == 1) {

        int a1, r, lim, i;
        printf("\nInsira o primeiro termo e, em seguida, a razão, e, por último, até qual termo você quer:\n\n>");
        scanf(" %d %d %d", &a1, &r, &lim);

        printf("\nA sequência é: ");

        for (i = 0; i < lim; i++) {

          if (i != lim - 1) {

          printf("%d, ", a1);
          } else {

            printf("%d", a1);
          }

          a1 *= r;
        }

        printf("\n");

      // achando a razão
      } else if (temp == 2) {

        double a1, an, n;
        double r;
        printf("\nInsira o primeiro termo, o termo que você conhece, e a posição dele na sequência\n\n>");
        scanf(" %lf %lf %lf", &a1, &an, &n);

        r = pow((an / a1), 1/(n-1));
        printf("\nA razão é: %.3lf\n", r);

      // achando o termo An
      } else if (temp == 3) {

        int a1, r, n, an;
        printf("\nInsira o primeiro termo, a razão, e a posição do termo que você deseja\n\n>");
        scanf(" %d %d %d", &a1, &r, &n);
        
        an = a1 * pow(r, (n-1));
        printf("O termo %d é: %d", n, an);

      // fechando o programa
      } else {break;}
    }

    }
  return 0;
}