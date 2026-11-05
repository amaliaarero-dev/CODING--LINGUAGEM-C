#include <stdio.h>

double calcularQuadrado(double x) {
    return x * x;
}

double calcularAreaCirculo(double raio) {
    const double PI = 3.1415926535;
    return PI * calcularQuadrado(raio);   /* chama outra funcao */
}

int main(void) {
    double raio;
    printf("Raio: ");
    scanf("%lf", &raio);
    /* main -> calcularAreaCirculo -> calcularQuadrado -> volta -> volta */
    printf("Area do circulo: %.2f\n", calcularAreaCirculo(raio));
    return 0;
}
