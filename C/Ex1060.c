#include <stdio.h>

int main(int argc, char const *argv[]) {
  float num[6];
  int i,pos=0;
  for (i=0;i<6;i++) {
    scanf("%f",&num[i]);
  }
  for (i=0;i<6;i++) {
    if (num[i]>0) {
      pos++;
    }
  }
  printf("%d valores positivos\n",pos);
  return 0;
}
