#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X, i,j=1;
  scanf("%d",&X);
  int v[X];
  for (i = 0; i < X; i++, j++) {
    v[i]=j;
  }
  for (i = 0; i < X; i++) {
    if (v[i] % 2 != 0) {
      printf("%d\n",v[i]);
    }
  }
  return 0;
}
