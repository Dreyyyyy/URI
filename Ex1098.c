#include <stdio.h>

int main(int argc, char const *argv[]) {
  float i = 0, j = 1;
  while (i <= 2) {
    while (j <= 3.4) {
      printf("I=%.1f J=%.1f\n", i, j);
      j++;
    }
    j = 1;
    i += 0.2;
    j += 0.2;
  }
  return 0;
}
