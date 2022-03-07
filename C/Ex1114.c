#include <stdio.h>

int main(int argc, char const *argv[]) {
  int senha = 0;
  do {
    scanf("%d", &senha);
    if (senha == 2002) {
      printf("Acesso Permitido\n");break;
    }
    else printf("Senha Invalida\n");
  } while(senha != 2002);
  return 0;
}
