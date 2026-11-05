#include <stdio.h>
#include <stdbool.h>

/* Calculo */
double calcularMedia(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}

/* Regra */
bool aprovado(double media, double frequencia) {
    return media >= 7.0 && frequencia >= 75.0;
}

/* Apresentacao */
void mostrarResultado(double media, double frequencia) {
    printf("Media: %.2f | Frequencia: %.1f%%\n", media, frequencia);
    if (aprovado(media, frequencia)) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
}

int main(void) {
    double n1, n2, n3, freq;
    printf("Digite as tres notas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    printf("Digite a frequencia (%%): ");
    scanf("%lf", &freq);

    double media = calcularMedia(n1, n2, n3);
    mostrarResultado(media, freq);
    return 0;
}
