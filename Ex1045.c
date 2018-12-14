#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double A,B,C,varAux;
  scanf("%lf%lf%lf",&A,&B,&C);
  if (A<B) {
    varAux=B;
    B=A;
    A=varAux;
  }
  if (A<C) {
    varAux=C;
    C=A;
    A=varAux;
  }
  if (B<C) {
    varAux=C;
    C=B;
    B=varAux;
  }
  if (A>=(B+C)) {//7==7
    printf("NAO FORMA TRIANGULO\n");
  }
  else {
    if (pow(A,2)==(pow(B,2)+pow(C,2))) {
      printf("TRIANGULO RETANGULO\n");
    }
    if (pow(A,2)>(pow(B,2)+pow(C,2))) {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if (pow(A,2)<(pow(B,2)+pow(C,2))) {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (A==B&&A==C) {
      printf("TRIANGULO EQUILATERO\n");
    }
    if (A==B&&C!=A) {
      printf("TRIANGULO ISOSCELES\n");
    }
    if (A==C&&B!=A) {
      printf("TRIANGULO ISOSCELES\n");
    }
    if (B==C&&A!=B) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }  
  return 0;
}
