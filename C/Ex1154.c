#include <stdio.h>

int main(void) {
    int idade = 0, qtd = 0, soma = 0;
    float media = 0.0;
    do {
        scanf("%d", &idade);
        if (idade > 0) {
            soma += idade;
            qtd++;
        }
    }while(idade > 0);
    media = (float)soma/(float)qtd;
    printf("%.2f\n", media);
    return 0;
}
