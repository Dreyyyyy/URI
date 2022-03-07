#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N = 0, X = 0, Y = 0, i = 0, j = 0, soma = 0;
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d%d", &X, &Y);
    if (X - Y == -1 || X - Y == 0 || X - Y == 1 || Y - X == -1 || Y - X == 0 || Y - X == 1 ) printf("0\n");
    else {
      if (X < Y) {
        for (j = X+1; j <= Y-1; j++) {
          if (j % 2 != 0) soma += j;
        }
        printf("%d\n", soma);
      }
      else {
        for (j = Y+1; j <= X-1; j++) {
          if (j % 2 != 0) soma += j;
        }
        printf("%d\n", soma);
      }
      soma = 0;
    }
  }
  return 0;
}
