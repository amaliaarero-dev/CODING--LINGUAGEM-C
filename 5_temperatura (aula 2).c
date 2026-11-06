#include <stdio.h>

int main(void) {
    double celsius;
    double fahrenheit;

    printf("Temperatura em Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    /* Experimento: 9 / 5 (inteiro) x 9.0 / 5.0 (double) */
    printf("9 / 5     = %d\n", 9 / 5);
    printf("9.0 / 5.0 = %.2f\n", 9.0 / 5.0);
    return 0;
}
