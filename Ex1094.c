#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, N, Quantia = 0, cobaias = 0, C = 0, S = 0, R = 0;
  char Tipo;
  double perC, perS, perR;
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d %c", &Quantia, &Tipo);
    cobaias += Quantia;
    switch (Tipo) {
      case 'C': C += Quantia; break;
      case 'S': S += Quantia; break;
      case 'R': R += Quantia; break;
    }
  }
  perC = (C * 100) / (float) cobaias;
  perS = (S * 100) / (float) cobaias;
  perR = (R * 100) / (float) cobaias;
  printf("Total: %d cobaias\n", cobaias);
  printf("Total de coelhos: %d\n", C);
  printf("Total de ratos: %d\n", R);
  printf("Total de sapos: %d\n", S);
  printf("Percentual de coelhos: %.2lf %%\n", perC);
  printf("Percentual de ratos: %.2lf %%\n", perR);
  printf("Percentual de sapos: %.2lf %%\n", perS);
  return 0;
}
