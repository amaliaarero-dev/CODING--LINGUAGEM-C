#include <stdio.h>

int main(void) {
    int a, b;

    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    if (b != 0) {
        double divisao = (double)a / b;
        printf("Divisao: %.2f\n", divisao);
        printf("Resto: %d\n", a % b);
    } else {
        printf("Divisao e resto indisponiveis: divisor igual a zero.\n");
    }
    return 0;
}
