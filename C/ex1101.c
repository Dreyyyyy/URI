#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int M = 0, N = 0, i = 0, Sum = 0, chave = 0;
  while (chave == 0) {
    scanf("%d", &M);
    scanf("%d", &N);
    Sum = 0;
    if (M <= 0 || N <= 0) return 0;
    if (M < N) {
      for (i = M; i <= N; i++) {
        printf("%d ", i);
        Sum += i;
      }
      printf("Sum=%d\n", Sum);
    }
    if (M > N) {
      for (i = N; i <= M; i++) {
        printf("%d ", i);
        Sum += i;
      }
      printf("Sum=%d\n", Sum);
    }
    if (M <= 0 || N <= 0) chave = 1;
  }
  return 0;
}
