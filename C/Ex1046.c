#include <stdio.h>

int main(int argc, char const *argv[]) {
  int ini,fim,tempo=0;
  scanf("%d%d",&ini,&fim);
  if (ini>=fim) {
    while(ini<24) {
      tempo++;
      ini++;
    }
    tempo+=fim;
  }
  else {
    while (ini<fim) {
      tempo ++;
      ini++;
    }
  }
  printf("O JOGO DUROU %d HORA(S)\n",tempo);
  return 0;
}
