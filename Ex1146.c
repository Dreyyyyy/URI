#include <stdio.h>

void imprime_sequencia(int X);

int main(void) {
    int X = 0;
    do {
        scanf("%d", &X);
        imprime_sequencia(X);
    }while (X != 0);
    return 0;
}

void imprime_sequencia(int X) {
    int i = 0;
    for (i = 1; i <= X; i++) {
        if (i != X) {
            printf("%d ", i);
        }
        else {
            printf("%d\n", i);
        }
    }
}
