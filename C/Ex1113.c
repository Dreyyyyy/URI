#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X = 0, Y = 0, i = 0;
  while (1) {
    scanf("%d%d", &X, &Y);
    if (X == Y) break;
    else {
      if (X < Y) printf("Crescente\n");
      if (Y < X) printf("Decrescente\n");
    }
  }
  return 0;
}
