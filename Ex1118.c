#include <stdio.h>

int main(int argc, char const *argv[]) {
  float nota1 = 0.0, nota2 = 0.0;
  int i = 0, X = 0;
  do {
    do {
      scanf("%f", &nota1);
      if (nota1 > 10.0 || nota1 < 0.0) printf("nota invalida\n");
      else {
        do {
          scanf("%f", &nota2);
          if (nota2 > 10.0 || nota2 < 0.0) {
            printf("nota invalida\n");
          }
          else printf("media = %.2f\n", (nota1 + nota2) / 2);
        } while (nota2 > 10.0 || nota2 < 0.0);
      }
    } while(nota1 > 10.0 || nota1 < 0.0);
    do {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &X);
    } while(X > 2 || X < 1);
  } while(X == 1);
  return 0;
}
