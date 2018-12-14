#include <stdio.h>

int main(){

  char NOME[9];
  double salF,mont,totalS;
  scanf("%s%lf%lf",NOME,&salF,&mont);
  totalS=salF+mont*0.15;
  printf("TOTAL = R$ %.2lf\n",totalS);
  return 0;

}
