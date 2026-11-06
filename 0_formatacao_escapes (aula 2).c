#include <stdio.h>

int main(void) {
    /* Atividade 1 */
    float preco = 19.5f;
    printf("%f\n", preco);
    printf("%.2f\n", preco);

    /* Atividade 2 */
    double pi = 3.1415926535;
    printf("%.2f\n", pi);
    printf("%.4f\n", pi);
    printf("%.8f\n", pi);
    printf("%.6f\n", pi);   /* quarta linha: 6 casas */
    printf("%f\n", pi);     /* comparacao com %f */

    /* Atividade 3 - escapes */
    printf("Linha 1\nLinha 2\nLinha 3\n");
    printf("Nome:\tJoao\n");
    printf("Mensagem: \"Ola!\"\n");
    printf("Caminho: C:\\temp\n");

    /* Desafio - recibo */
    printf("\n=========================\n");
    printf("RECIBO\n");
    printf("=========================\n");
    printf("Produto:\tCaderno\n");
    printf("Preco:\t\tR$ %.2f\n", 19.5);
    printf("Mensagem: \"Obrigado!\"\n");
    printf("=========================\n");
    return 0;
}
