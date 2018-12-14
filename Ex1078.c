#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, i, res = 0;
  scanf("%d", &N);
  for (i = 1; i <= 10; i++) {
    res = i * N;
    printf("%d x %d = %d\n", i, N, res);
  }
  return 0;
}
