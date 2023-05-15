#include <stdio.h>

int main() {
    float valores[15];
    float maior = 0, menor = 0;

    // lê 15 valores do usuário
    for (int i = 0; i < 15; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &valores[i]);

        // atualiza o maior e o menor valor
        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        } else {
            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }
    }

    printf("O maior valor é %.2f\n", maior);
    printf("O menor valor é %.2f\n", menor);

    return 0;
}

