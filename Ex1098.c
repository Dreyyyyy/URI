#include <stdio.h>

int main(void) {
    float k = 0, I = 0, J = 1;
    while (I <= 2.0) {
        if ( I == 0 || I == 1 || I == 2) {
            printf("I=%d J=%d\n", (int)I, (int)J);
            printf("I=%d J=%d\n", (int)I, (int)J+1);
            printf("I=%d J=%d\n", (int)I, (int)J+2);
        }
        else {
            printf("I=%.1f J=%.1f\n", I, J);
            printf("I=%.1f J=%.1f\n", I, J+1);
            printf("I=%.1f J=%.1f\n", I, J+2);
        }
        I += 0.2;
        J += 0.2;
    }
    printf("I=%d J=%d\n", (int)I, (int)J);
    printf("I=%d J=%d\n", (int)I, (int)J+1);
    printf("I=%d J=%d\n", (int)I, (int)J+2);    
    return 0;
}
