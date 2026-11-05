#include <stdio.h>

double calcularMedia(double a, double b) {
    return (a + b) / 2.0;
}

int main(void) {
    printf("Media de 8 e 9: %.1f\n", calcularMedia(8, 9));   /* 8.5 */
    return 0;
}
