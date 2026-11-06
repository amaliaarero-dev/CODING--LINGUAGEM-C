#include <stdio.h>

int main(void) {
    int total, horas, minutos, segundos, resto;

    printf("Total de segundos: ");
    scanf("%d", &total);

    horas = total / 3600;
    resto = total % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d hora(s), %d minuto(s), %d segundo(s)\n", horas, minutos, segundos);
    return 0;
}
