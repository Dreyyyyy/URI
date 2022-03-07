#include <stdio.h>

int main(int argc, char const *argv[]) {
  float nota1 = 0.0, nota2 = 0.0;
  int i = 0;
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
  return 0;
}
