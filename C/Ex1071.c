#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X, Y, soma = 0;
  scanf("%d%d", &X, &Y);//6,-5
  if (X < Y) {
    while (X < Y) {
      if (X % 2 != 0) {
        soma += X;
      }
      X += 1;
    }
  }
  else {
    Y+=1;
    while (Y < X) {
      if (Y % 2 != 0) {
        soma += Y;
      }
      Y += 1;
    }
  }
  printf("%d\n", soma);
  return 0;
}
