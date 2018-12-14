#include <stdio.h>

int main(){

  int cod1,num1,cod2,num2;
  float uni1,uni2,pagar;
  scanf("%d%d%f",&cod1,&num1,&uni1);
  scanf("%d%d%f",&cod2,&num2,&uni2);
  pagar=num1*uni1+num2*uni2;
  printf("VALOR A PAGAR: R$ %.2f\n",pagar);
  return 0;

}
