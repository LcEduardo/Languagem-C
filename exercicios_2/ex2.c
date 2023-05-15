#include <stdio.h>

int main(){
	
	float numero;
	int i;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

		printf("Tabela de multiplicação de %.2f:\n", numero);
    
    for (i = 1; i <= 200; i++) {
        printf("%.2f x %d = %.2f\t", numero, i, numero * i);
        
        if (i % 10 == 0) {
            printf("\n"); // Pula para a próxima linha após imprimir 10 números
        }
}
}
