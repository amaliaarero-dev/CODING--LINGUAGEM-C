#include <stdio.h>

int main(void) {
    /* Caso 1: faltava o & no scanf */
    int idade;
    scanf("%d", &idade);

    /* Caso 2: float usa %f no scanf (nao %d) */
    float altura;
    scanf("%f", &altura);

    /* Caso 3: int / int descarta a parte fracionaria -> casting */
    int a = 7, b = 2;
    double r = (double)a / b;

    /* Caso 4: variavel nao inicializada -> dar valor inicial */
    int x = 0;

    printf("idade=%d altura=%.2f r=%.2f x=%d\n", idade, altura, r, x);
    return 0;
}
