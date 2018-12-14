#include <stdio.h>
#include <math.h>

int main(){

  float x1,y1,x2,y2,dist,x2x1,y2y1,soma;
  scanf("%f%f",&x1,&y1);
  scanf("%f%f",&x2,&y2);
  x2x1=pow(x2-x1,2);
  y2y1=pow(y2-y1,2);
  soma=x2x1+y2y1;
  dist=sqrt(soma);
  printf("%.4f\n",dist);
  return 0;

}
