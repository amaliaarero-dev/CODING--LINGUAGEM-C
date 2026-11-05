#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int menor(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main(void) {
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    printf("Maior: %d\n", maior(x, y));
    printf("Menor: %d\n", menor(x, y));
    return 0;
}
