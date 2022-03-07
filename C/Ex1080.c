#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, v[100],mV = 0, pos;
  for (i = 0; i < 100; i++) {
    scanf("%d", &v[i]);
    if (v[i] >= mV) {
      mV = v[i];
      pos = i+1;
    }
  }
  printf("%d\n", mV);
  printf("%d\n", pos);
  return 0;
}
