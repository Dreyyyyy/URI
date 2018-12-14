#include <stdio.h>

int pot(int base, int expo);

int main(int argc, char const *argv[]) {
  int N, i;
  scanf("%d", &N);
  for (i = 1; i <= N; i++) {
    if (i % 2 == 0) {
        pot(i, 2);
        printf("%d^2 = %d\n", i, pot(i, 2));
    }
  }
  return 0;
}

int pot(int base, int expo) {
  if (expo == 0) {
    return 1;
  }
  if (expo == 1) {
    return base;
  }
  return base * pot(base, expo-1);
}
