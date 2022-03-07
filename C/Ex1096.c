#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, j, k;
  for (k = 1; k <= 9; k+=2) {
    for (i = k, j = 7; j >= 5 ; j--) {
      printf("I=%d J=%d\n", i, j);
    }
  }
  return 0;
}
