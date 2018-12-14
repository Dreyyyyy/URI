#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, i;
  scanf("%d", &N);
  int num[N];
  for (i = 0; i < N; i++) {
    scanf("%d", &num[i]);
  }
  for (i = 0; i < N; i++) {
    if (num[i] > 0) {
      if (num[i] % 2 == 0) {
        printf("EVEN POSITIVE\n");
      }
      else {
        printf("ODD POSITIVE\n");
      }
    }
    else if (num[i] < 0) {
      if (num[i] % 2 == 0) {
        printf("EVEN NEGATIVE\n");
      }
      else {
        printf("ODD NEGATIVE\n");
      }
    }
    if (num[i] == 0) {
      printf("NULL\n");
    }
  }
  return 0;
}
