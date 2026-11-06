#include <stdio.h>

int main(void) {
    int numero1, numero2;

    printf("Primeiro numero: ");
    scanf("%d", &numero1);
    printf("Segundo numero: ");
    scanf("%d", &numero2);

    printf("Soma = %d\n", numero1 + numero2);
    printf("Subtracao = %d\n", numero1 - numero2);
    printf("Multiplicacao = %d\n", numero1 * numero2);
    if (numero2 != 0) {
        printf("Divisao inteira = %d\n", numero1 / numero2);
        printf("Resto = %d\n", numero1 % numero2);
    } else {
        printf("Divisao e resto indisponiveis: divisor igual a zero.\n");
    }
    return 0;
}
