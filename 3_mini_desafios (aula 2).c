#include <stdio.h>

int main(void) {
    /* 1. Divisao corrigida */
    int a = 10, b = 3;
    double resultado = (double)a / b;
    printf("1) %f\n", resultado);

    /* 2. Precedencia */
    printf("2) (2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("   2 + 3 * 4   = %d\n", 2 + 3 * 4);

    /* 3. Contador */
    int contador = 0;
    contador++;
    contador++;
    contador++;
    printf("3) contador = %d\n", contador);

    /* 4. Perda de informacao */
    double valor = 8.75;
    int convertido = (int)valor;
    printf("4) double %.2f -> int %d\n", valor, convertido);
    return 0;
}
