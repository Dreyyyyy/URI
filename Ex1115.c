#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X = 0, Y = 0;
  while (1) {
    scanf("%d%d", &X, &Y);
    if (X == 0 || Y == 0) break;
    else {
      if (X > 0 && Y > 0) printf("primeiro\n");
      else if (X < 0 && Y > 0) printf("segundo\n");
      else if (X < 0 && Y < 0) printf("terceiro\n");
      else if (X > 0 && Y < 0) printf("quarto\n"); 
    }
  }
  return 0;
}
