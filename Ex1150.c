#include <stdio.h>

int main(void) {
    int X = 0, Z = 0, soma = 0, cont = 1;
    scanf("%d%d", &X, &Z);
    while(Z <= X) {
        scanf("%d", &Z);
    }
    soma = X;
    while (soma < Z) {
        soma += X+cont;
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}
