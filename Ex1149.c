#include <stdio.h>

int main(void) {
    int A = 0, N = 0, i = 0, soma = 0;
    scanf("%d%d", &A, &N);
    while (N <= 0) {
        scanf("%d", &N);
    }
    for (i = 0; i <= N-1; i++) {
        soma += A+i;
    }
    printf("%d\n", soma);
    return 0;
}
