#include <stdio.h>

int main(void) {
    int gInter = 0, gGremio = 0, resp = 0, grenais = 0, vitGremio = 0, vitInter = 0, emp = 0;
    do {
        scanf("%d%d", &gInter, &gGremio);
        grenais++;
        if (gInter > gGremio) {
            vitInter++;
        }
        else if (gGremio > gInter) {
            vitGremio++;
        }
        else {
            emp++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resp);
    }while(resp == 1);
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitInter);
    printf("Gremio:%d\n", vitGremio);
    printf("Empates:%d\n", emp);
    if (vitInter > vitGremio) {
        printf("Inter venceu mais\n");
    }
    else if (vitGremio > vitInter) {
        printf("Gremio venceu mais\n");
    }
    else {
        printf("Nao houve vencedor\n");
    }
    return 0;
}
