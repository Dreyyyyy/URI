#include <stdio.h>

int main(int argc, char const *argv[]) {
  double N,dec;
  int n100,n50,n20,n10,n5,n2,m100,m50,m25,m10,m5,m1;
  scanf("%lf",&N);
  dec=N-(int)N;
  n100=N/100;
  N=(int)N%100;
  n50=N/50;
  N=(int)N%50;
  n20=N/20;
  N=(int)N%20;
  n10=N/10;
  N=(int)N%10;
  n5=N/5;
  N=(int)N%5;
  n2=N/2;
  N=(int)N%2;
  m100=N;
  dec=dec*100;
  dec=(int)dec%100;
  m50=(int)dec/50;
  dec=(int)dec%50;
  m25=(int)dec/25;
  dec=(int)dec%25;
  m10=(int)dec/10;
  dec=(int)dec%10;
  m5=(int)dec/5;
  dec=(int)dec%5;
  m1=(int)dec/1;
  dec=(int)dec%1;
  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", n100);
  printf("%d nota(s) de R$ 50.00\n", n50);
  printf("%d nota(s) de R$ 20.00\n", n20);
  printf("%d nota(s) de R$ 10.00\n", n10);
  printf("%d nota(s) de R$ 5.00\n", n5);
  printf("%d nota(s) de R$ 2.00\n", n2);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", m100);
  printf("%d moeda(s) de R$ 0.50\n", m50);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  printf("%d moeda(s) de R$ 0.05\n", m5);
  printf("%d moeda(s) de R$ 0.01\n", m1);
  return 0;
}
