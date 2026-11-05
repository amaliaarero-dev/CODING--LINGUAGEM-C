#include <stdio.h>

/* Correcao: a funcao devolve o valor por return */
int calcular(void) {
    int resultado = 10 + 5;
    return resultado;
}

int main(void) {
    int resultado = calcular();   /* nova variavel local do main */
    printf("%d\n", resultado);
    return 0;
}
