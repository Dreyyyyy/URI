#include <stdio.h>

void fibonacci(int N);

int main(void) {
    int N = 0, i = 0, res = 0;
    do {
        scanf("%d", &N);
    }while(N >= 46 || N <= 0);
    fibonacci(N);
    return 0;
}

void fibonacci(int N) {
    int i = 0, ant = 1, k = 0, res = 0;
    for (k = 0; k < N; k++) {
        if (k == 0 || k == 1) {
            printf("%d %d ", k, k+1);  
            k += 2;      
        }
        res = i+ant;
        i = ant;
        ant = res;
        if (k == N-1) {
            printf("%d", res);
        }
        else if (k < N) {
            printf("%d ", res);
        }
    }
    printf("\n");
}

