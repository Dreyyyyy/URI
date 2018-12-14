#include <stdio.h>

int main(int argc, char const *argv[]) {

  int idade,anos=0,meses=0,dias=0;
  scanf("%d",&idade);
  while (idade>=365) {
    anos++;
    idade-=365;
  }
  while (idade>=30) {
    meses++;
    idade-=30;
  }
  while (idade>=1) {
    dias++;
    idade-=1;
  }
  printf("%d ano(s)\n",anos);
  printf("%d mes(es)\n",meses);
  printf("%d dia(s)\n",dias);
  return 0;

}
