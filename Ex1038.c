#include <stdio.h>

int main(int argc, char const *argv[]) {
  int cod,qtd;
  float uni;
  scanf("%d%d",&cod,&qtd);
  switch (cod) {
    case 1:
      uni=4.00;
      printf("Total: R$ %.2f\n",uni*qtd);break;
    case 2:
      uni=4.50;
      printf("Total: R$ %.2f\n",uni*qtd);break;
    case 3:
      uni=5.00;
      printf("Total: R$ %.2f\n",uni*qtd);break;
    case 4:
      uni=2.00;
      printf("Total: R$ %.2f\n",uni*qtd);break;
    case 5:
      uni=1.50;
      printf("Total: R$ %.2f\n",uni*qtd);break;
  }
  return 0;
}
