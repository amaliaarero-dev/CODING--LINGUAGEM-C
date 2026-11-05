#include <stdio.h>

/* ---------- Operacoes (so calculam) ---------- */
double somar(double a, double b)       { return a + b; }
double subtrair(double a, double b)    { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b)     { return a / b; }   /* so e chamada com b != 0 */

/* ---------- Interface (entrada e saida) ---------- */
void mostrarMenu(void) {
    printf("\n========================\n");
    printf("      CALCULADORA\n");
    printf("========================\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
}

double lerNumero(const char *mensagem) {
    double valor;
    printf("%s", mensagem);
    scanf("%lf", &valor);
    return valor;
}

void mostrarResultado(const char *operacao, double resultado) {
    printf("Resultado da %s: %.2f\n", operacao, resultado);
}

/* ---------- Controle (decide qual operacao executar) ---------- */
void executarOperacao(int opcao) {
    double a, b;

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return;                               /* retorno antecipado */
    }

    a = lerNumero("Digite o primeiro numero: ");
    b = lerNumero("Digite o segundo numero: ");

    switch (opcao) {
        case 1:
            mostrarResultado("soma", somar(a, b));
            break;
        case 2:
            mostrarResultado("subtracao", subtrair(a, b));
            break;
        case 3:
            mostrarResultado("multiplicacao", multiplicar(a, b));
            break;
        case 4:
            if (b == 0) {                     /* tratamento explicito */
                printf("Erro: divisao por zero nao e permitida.\n");
            } else {
                mostrarResultado("divisao", dividir(a, b));
            }
            break;
    }
}

/* ---------- main: so a estrutura geral ---------- */
int main(void) {
    int opcao;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        if (opcao != 0) {
            executarOperacao(opcao);
        }
    } while (opcao != 0);

    printf("Encerrando a calculadora.\n");
    return 0;
}
