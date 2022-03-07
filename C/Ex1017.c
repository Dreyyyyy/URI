#include <stdio.h>

int main(int argc, char const *argv[]) {

  int tempG,velM;
  float litros;
  scanf("%d%d",&tempG,&velM);
  litros=(tempG*velM)/12.0;
  printf("%.3f\n",litros);
  return 0;

}
