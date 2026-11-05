#include <stdio.h>
#include <stdbool.h>

/* Regra com tres condicoes: maior de idade, nao bloqueado e com ingresso */
bool podeEntrar(int idade, bool bloqueado, bool temIngresso) {
    return idade >= 18 && !bloqueado && temIngresso;
}

int main(void) {
    int idade, b, ing;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Esta bloqueado? (1 = sim, 0 = nao): ");
    scanf("%d", &b);
    printf("Possui ingresso? (1 = sim, 0 = nao): ");
    scanf("%d", &ing);

    if (podeEntrar(idade, b == 1, ing == 1)) {
        printf("Entrada liberada\n");
    } else {
        printf("Entrada negada\n");
    }
    return 0;
}
