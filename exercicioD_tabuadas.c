#include <stdio.h>

void mostrarTabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

/* Desafio: reutiliza mostrarTabuada() */
void mostrarTabuadas(int inicio, int fim) {
    for (int n = inicio; n <= fim; n++) {
        printf("--- Tabuada do %d ---\n", n);
        mostrarTabuada(n);
    }
}

int main(void) {
    int inicio, fim;
    printf("Tabuada inicial e final: ");
    scanf("%d %d", &inicio, &fim);
    mostrarTabuadas(inicio, fim);
    return 0;
}
