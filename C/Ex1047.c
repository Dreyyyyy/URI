#include <stdio.h>

int main(int argc, char const *argv[]) {
  int horI,minI,horF,minF,hor,min;
  scanf("%d%d%d%d",&horI,&minI,&horF,&minF);
  hor=horF-horI;
  min=minF-minI;
  if(hor<=0&&min<=0) {
    hor+=24;
  }
  if(min<0) {
  hor--;
  min+=60;
  }
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hor,min);
  return 0;
}
