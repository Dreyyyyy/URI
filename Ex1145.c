#include <stdio.h>

int main(void) {
    int X = 0, Y = 0, i = 0, j = 0;
    do {
        scanf("%d%d", &X, &Y);
    }while(X < 1 && X > 20 && Y < X && Y > 100000);
    for (i = 1; i <= Y; i++) {
        for (j = 1; j <= X; j++) {
            if (j == X) {
                printf("%d\n", i);
            }
            else {
                printf("%d ", i);
            }
            i++;
        }
        i--;
    }
    return 0;
}
