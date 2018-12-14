#include "stdio.h"

int main(int argc, char const *argv[]) {

  int N,hor=0,min=0,seg=0;
  scanf("%d",&N);
  while (N>=3600) {
    hor++;
    N-=3600;
  }
  while (N>=60) {
    min++;
    N-=60;
  }
  while (N>=1) {
    seg++;
    N-=1;
  }
  printf("%d:%d:%d\n",hor,min,seg);
  return 0;

}
