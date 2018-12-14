#include <stdio.h>

int main(int argc, char const *argv[]) {

  int A,B,C,D,somaCD,somaAB;
  scanf("%d%d%d%d",&A,&B,&C,&D);
  if(B>C){
    if (D>A) {
      somaCD=C+D;
      somaAB=A+B;
      if (somaCD>somaAB) {
        if (C>0&&D>0) {
          if (A%2==0) {
            printf("Valores aceitos\n");
          }
          else
              printf("Valores nao aceitos\n");
        }
        else
            printf("Valores nao aceitos\n");
      }
      else
          printf("Valores nao aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");
  }
  else
      printf("Valores nao aceitos\n");
  return 0;

}
