#include <stdio.h>

int main(void) {
    int N = 0, X = 0, Y = 0, i = 0, soma = 0, j = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d%d", &X, &Y);
        soma = 0;
        if (X % 2 != 0) {
            for (j = 0; j < Y; j++) {
                if (X % 2 != 0) {
                    soma += X;
                    X += 2;
                }
                else {
                    X++;
                }
            }
        }
        else {
            for (j = 0; j <= Y; j++) {
                if (X % 2 != 0) {
                    soma += X;
                    X += 2;
                }
                else {
                    X++;
                }
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}
