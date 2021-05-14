#include <stdio.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "");
  int anderson = 0;
  int temp, i, res;

  while(anderson == 0) {

    printf("\n\nBem vindo ao simulador de por do sol no horizonte 2020, by Coelho enterprises. Aperte 1 para continuar e 0 para sair\n\n>");
    scanf(" %d", &temp);

    if (temp == 0) {

      break;
    } else {}

    printf("\nQual a resolução do seu computador?\n (1) - 1920p/Desktop\n (2) - 1366/Notebook\n\n>");
    scanf(" %d", &res);
    printf("\nEscolha o horário, entre 12 e 21h\n\n>");
    scanf(" %d", &temp);
    if (res == 2) {

      if (temp < 12 || temp > 21) {

        printf("\nComando incorreto. Por favor, insira o horário correto.");
      } else {

        temp -= 11;

        printf("\n---------------------------------------------------------------");

        for (i = 0; i < 627; i++) {

          printf("-");
          
          if (i == (630 * temp / 10) - 34) {

            printf("SOL");
          }
        }
        printf("---------------------------------------------------------------");
        printf("\n\nSol posição %d", temp);
        }
    } else {

       if (temp < 12 || temp > 21) {

        printf("\nComando incorreto. Por favor, insira o horário correto.");
      } else {

        temp -= 11;

        printf("\n----------------------------------------------------------------------------");

       for (i = 0; i < 757; i++) {

          printf("-");
          
          if (i == (760 * temp / 10) - 41) {

            printf("SOL");
          }
        }
        printf("\n----------------------------------------------------------------------------");
        printf("\n\nSol posição %d", temp);
        }
    }
  }

  return 0;
}