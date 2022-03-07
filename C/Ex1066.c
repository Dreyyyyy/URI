#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num[5], i, pos = 0, neg = 0, par = 0, impar = 0;
  for (i = 0; i < 5; i++) {
    scanf("%d", &num[i]);
    if (num[i] > 0) {
      pos++;
      if (num[i] % 2 == 0) {
        par++;
      }
      else {
        impar++;
      }
    }
    else if (num[i] < 0) {
      neg++;
      if (num[i] % 2 == 0) {
        par++;
      }
      else {
        impar++;
      }
    }
    else if (num[i] == 0) {
      par++;
    }

  }
  printf("%d valor(es) par(es)\n",par);
  printf("%d valor(es) impar(es)\n",impar);
  printf("%d valor(es) positivo(s)\n",pos);
  printf("%d valor(es) negativo(s)\n",neg);
  return 0;
}
