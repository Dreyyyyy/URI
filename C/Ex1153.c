#include <stdio.h>

int fatorial(int N);

int main(void) {
    int N = 0, res = 0;
    do {
        scanf("%d", &N);
    }while(N <= 0|| N >= 13); 
    res = fatorial(N);
    printf("%d\n", res);
    return 0;
}

int fatorial(int N) {
    if (N == 1) {
        return 1;
    }
    else {
        return N * fatorial(N-1);
    }
}
