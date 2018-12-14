#include <stdio.h>

int main(int argc, char const *argv[]) {
  int W,diaI,diaF,h,m,s,hh,mm,ss,X,Y,Z;
  scanf("Dia %d",&diaI);
  scanf("%d : %d : %d\n",&h,&m,&s);
  scanf("Dia %d",&diaF);
  scanf("%d : %d : %d",&hh,&mm,&ss);
  X=hh-h;
  Y=mm-m;
  Z=ss-s;
  W=diaF-diaI;
  if (Z<0) {
    Z+=60;
    Y--;
  }

  if (Y<0) {
    Y+=60;
    X--;
  }
  if (X<0) {
    X+=24;
    W--;
  }
  printf("%d dia(s)\n",W);
  printf("%d hora(s)\n",X);
  printf("%d minuto(s)\n",Y);
  printf("%d segundo(s)\n",Z);
  return 0;
}
