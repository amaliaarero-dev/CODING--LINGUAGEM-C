#include <stdio.h>

double celsiusParaFahrenheit(double c) {
    return c * 9.0 / 5.0 + 32.0;
}

double fahrenheitParaCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

double kmParaMilhas(double km) {
    return km * 0.621371;
}

int main(void) {
    double c, f, km;

    printf("Temperatura em Celsius: ");
    scanf("%lf", &c);
    printf("%.2f C = %.2f F\n", c, celsiusParaFahrenheit(c));

    printf("Temperatura em Fahrenheit: ");
    scanf("%lf", &f);
    printf("%.2f F = %.2f C\n", f, fahrenheitParaCelsius(f));

    printf("Distancia em km: ");
    scanf("%lf", &km);
    printf("%.2f km = %.2f milhas\n", km, kmParaMilhas(km));
    return 0;
}
