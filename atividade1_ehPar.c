#include <stdio.h>
#include <stdbool.h>

bool ehPar(int numero) {
    return numero % 2 == 0;
}

int main(void) {
    int testes[] = {2, 7, 0, -4};
    for (int i = 0; i < 4; i++) {
        int numero = testes[i];
        printf("%d: ", numero);
        if (ehPar(numero)) {
            printf("Par\n");
        } else {
            printf("Impar\n");
        }
    }
    return 0;
}
