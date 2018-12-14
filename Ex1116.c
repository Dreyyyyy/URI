#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N = 0, X = 0, Y = 0, i = 0;
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d%d", &X, &Y);
    if (Y == 0) printf("divisao impossivel\n");
    else printf("%.1f\n", (float)X/Y);
  }
  return 0;
}
