#include <stdio.h>

int main() {
    float nume;

    printf("Digite um numero: ");
    scanf("%f", &nume);

    if ((nume == 6) || (nume == 28) || (nume == 496) || (nume == 8128)) {
        printf("Esse numero e perfeito: %.2f\n", nume);
    } else {
        printf("Esse numero e imperfeito: %.2f\n", nume);
    }

}
