#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X, i;
  scanf("%d", &X);
  for (i = 0; i < 12; i++, X++) {
    if (X % 2 != 0) {
      printf("%d\n", X);
    }
  }
  return 0;
}
