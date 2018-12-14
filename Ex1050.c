#include <stdio.h>

int main(int argc, char const *argv[]) {
  int DDD,v[8]={61,71,11,21,32,19,27,31},valido=0,i;
  scanf("%d",&DDD);
  for(i=0;i<8;i++) {
    if (DDD==v[i]) {
      valido++;
    }
  }
  if (valido==1) {
    if (DDD==61) {
      printf("Brasilia\n");
    }
    if (DDD==71) {
      printf("Salvador\n");
    }
    if (DDD==11) {
      printf("Sao Paulo\n");
    }
    if (DDD==21) {
      printf("Rio de Janeiro\n");
    }
    if (DDD==32) {
      printf("Juiz de Fora\n");
    }
    if (DDD==19) {
      printf("Campinas\n");
    }
    if (DDD==27) {
      printf("Vitoria\n");
    }
    if (DDD==31) {
      printf("Belo Horizonte\n");
    }
  }
  else {
    printf("DDD nao cadastrado\n");
  }
  return 0;
}
