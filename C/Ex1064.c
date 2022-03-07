#include <stdio.h>

int main(int argc, char const *argv[]) {
  float num[6],media=0.0,numM=0.0;
  int i,pos=0;
  for (i=0;i<6;i++) {
    scanf("%f",&num[i]);
  }
  for (i=0;i<6;i++) {
    if (num[i]>0) {
      pos++;
      numM+=num[i];
    }
  }
  media=numM/pos;
  printf("%d valores positivos\n",pos);
  printf("%.1f\n",media);
  return 0;
}
