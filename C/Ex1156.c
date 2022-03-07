#include <stdio.h>

int main(void) {
    int i = 0, j = 0;
    float S = 0;
    for (i = 1, j = 1; j <= 39; i += i, j += 2) {
        S += (float)j/i;
    }
    printf("%.2f\n", S);
    return 0;
}
