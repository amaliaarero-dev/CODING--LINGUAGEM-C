#include <stdio.h>

int somar(int a, int b) {
    int resultado = a + b;
    return resultado;             /* correcao */
}

int main(void) {
    printf("%d\n", somar(2, 3));
    return 0;
}
