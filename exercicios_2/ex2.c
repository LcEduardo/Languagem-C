#include <stdio.h>

int main(){
	
	float numero;
	int i;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

		printf("Tabela de multiplica��o de %.2f:\n", numero);
    
    for (i = 1; i <= 200; i++) {
        printf("%.2f x %d = %.2f\t", numero, i, numero * i);
        
        if (i % 10 == 0) {
            printf("\n"); // Pula para a pr�xima linha ap�s imprimir 10 n�meros
        }
}
}
