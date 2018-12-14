#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, i;
  double A, B, C, Ap, Bp, Cp, med = 0.0;
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    Ap = A * 0.2;
    Bp = B * 0.3;
    Cp = C * 0.5;
    med = Ap + Bp + Cp;
    printf("%.1lf\n", med);
  }
  return 0;
}
