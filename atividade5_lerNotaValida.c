#include <stdio.h>

double lerNotaValida(void) {
    double nota;
    do {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%lf", &nota);
    } while (nota < 0 || nota > 10);
    return nota;
}

double calcularMedia(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main(void) {
    double n1 = lerNotaValida();
    double n2 = lerNotaValida();
    double n3 = lerNotaValida();
    printf("Media: %.2f\n", calcularMedia(n1, n2, n3));
    return 0;
}
