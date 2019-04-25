#include <stdio.h>

int main(void) {
    int i = 0, N = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        } 
    }
    return 0;
}
