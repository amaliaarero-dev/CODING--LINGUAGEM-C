#include <stdio.h>

int main(void) {
    double peso, altura, imc;

    printf("Peso: ");
    scanf("%lf", &peso);
    printf("Altura: ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);
    return 0;
}
