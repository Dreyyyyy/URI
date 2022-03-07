#include <stdio.h>

int main() {
	int X = 0, Y = 0, i = 0, varAux = 0;
	scanf("%d%d", &X, &Y);
	if(X > Y) {
		varAux = X;
		X = Y;
		Y = varAux;		
	}
	for(i = X+1; i < Y; i++) {
		if(i % 5 == 2|| i % 5 == 3) printf("%d\n", i); 
	}
	return 0;
}
