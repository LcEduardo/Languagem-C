#include <stdio.h>

int main(){
	
	float soma = 0;
	int dividendo;
	int divisor;
	
	for (dividendo = 1, divisor = 1; dividendo <= 99 && divisor <= 50; dividendo += 2, divisor++) {
		soma += (float)dividendo / divisor;
	}
	
	printf("O valor é: %.2f", soma);
	
	return 0;
}
