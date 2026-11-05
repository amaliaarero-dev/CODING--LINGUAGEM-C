#include <stdio.h>
#include <stdbool.h>

bool notaValida(double nota) {
    if (nota < 0 || nota > 10) {
        return false;
    }
    return true;
}

int maior(int a, int b) {
    if (a > b) {
        return a;       /* retorno antecipado */
    }
    return b;
}

int main(void) {
    printf("notaValida(8.5)  = %s\n", notaValida(8.5)  ? "true" : "false");
    printf("notaValida(11)   = %s\n", notaValida(11)   ? "true" : "false");
    printf("notaValida(-1)   = %s\n", notaValida(-1)   ? "true" : "false");
    printf("maior(3, 9)      = %d\n", maior(3, 9));
    printf("maior(12, 5)     = %d\n", maior(12, 5));
    return 0;
}
