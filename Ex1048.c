#include <stdio.h>

int main(int argc, char const *argv[]) {
  double salF,nSal,reaj;
  scanf("%lf",&salF);
  if(salF<=400.00) {
    reaj=salF*0.15;
    nSal=salF+reaj;
    printf("Novo salario: %.2lf\n",nSal);
    printf("Reajuste ganho: %.2lf\n",reaj);
    printf("Em percentual: 15 %%\n");
  }
  if(salF>=400.01&&salF<=800.00) {
    reaj=salF*0.12;
    nSal=salF+reaj;
    printf("Novo salario: %.2lf\n",nSal);
    printf("Reajuste ganho: %.2lf\n",reaj);
    printf("Em percentual: 12 %%\n");
  }
  if(salF>=800.01&&salF<=1200.00) {
    reaj=salF*0.10;
    nSal=salF+reaj;
    printf("Novo salario: %.2lf\n",nSal);
    printf("Reajuste ganho: %.2lf\n",reaj);
    printf("Em percentual: 10 %%\n");
  }
  if(salF>=1200.01&&salF<=2000.00) {
    reaj=salF*0.07;
    nSal=salF+reaj;
    printf("Novo salario: %.2lf\n",nSal);
    printf("Reajuste ganho: %.2lf\n",reaj);
    printf("Em percentual: 7 %%\n");
  }
  if(salF>2000.00) {
    reaj=salF*0.04;
    nSal=salF+reaj;
    printf("Novo salario: %.2lf\n",nSal);
    printf("Reajuste ganho: %.2lf\n",reaj);
    printf("Em percentual: 4 %%\n");
  }
  return 0;
}
