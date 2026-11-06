#include <stdio.h>

int main(void) {
    int a, b;
    float nota1, nota2, nota3, media;

    printf("Primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Segundo numero inteiro: ");
    scanf("%d", &b);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0f;

    printf("\n=============================\n");
    printf("       RESUMO NUMERICO\n");
    printf("=============================\n");
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    if (b != 0) {
        printf("Divisao: %.2f\n", (double)a / b);
        printf("Resto: %d\n", a % b);
    } else {
        printf("Divisao e resto indisponiveis: divisor igual a zero.\n");
    }
    printf("-----------------------------\n");
    printf("Media das notas: %.2f\n", media);
    printf("=============================\n");
    return 0;
}
