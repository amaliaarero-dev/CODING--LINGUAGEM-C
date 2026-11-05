#include <stdio.h>

/* Correcao: devolve o novo valor em vez de alterar a copia */
int adicionarUm(int numero) {
    return numero + 1;
}

int main(void) {
    int x = 10;
    x = adicionarUm(x);           /* guarda o retorno em x */
    printf("%d\n", x);            /* 11 */
    return 0;
}
