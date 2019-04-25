#include <stdio.h>

int main(void) {
    int i = 0, X = 0, soma = 0;
    do {
        scanf("%d", &X);
        if(X == 0) {
            return 0;
        }
        soma = 0;
        if (X % 2 == 0) {
            for (i = 0; i < 5; i++) {
               if (X % 2 == 0) {
                    soma += X;
                    X += 2;
                }
                else {
                    X++;
                }
            }
        }
        else {
            for (i = 0; i <= 5; i++) {
                if (X % 2 == 0) {
                    soma += X;
                    X += 2;
                }
                else {
                    X++;
                }
            }            
        }
        printf("%d\n", soma);
    }while(X != 0);
    return 0;
}
