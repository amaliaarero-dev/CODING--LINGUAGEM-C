#include <stdio.h>

int main(void) {
    int idade;
    float altura;
    double peso;
    char conceito;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%lf", &peso);
    printf("Digite o conceito: ");
    scanf(" %c", &conceito);

    printf("\nIdade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2f\n", peso);
    printf("Conceito: %c\n", conceito);
    return 0;
}
