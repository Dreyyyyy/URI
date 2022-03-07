#include <stdio.h>

int main(int argc, char const *argv[]) {
  int v[100],i,j=1;
  for (i=0;i<100;i++,j++) {
    v[i]=j;
  }
  for (i=0;i<100;i++) {
    if (v[i]%2==0) {
      printf("%d\n",v[i]);
    }
  }
  return 0;
}
