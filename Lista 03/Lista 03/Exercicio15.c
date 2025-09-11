#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//Calcule o máximo divisor comum (MDC) entre dois números de forma recursiva

int mdc(int a, int b) {
    if (b == 0)
        return a;   
    else
        return mdc(b, a % b); 
}

int main() {
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("MDC(%d, %d) = %d\n", x, y, mdc(x, y));

    return 0;
}