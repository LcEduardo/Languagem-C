#include <stdio.h>>

int main(){
	
	float massa;
	float metade;
	
	printf("Digite a massa do elemento x:");
	scanf("%f", &massa);
	
	do{
	metade = massa/2;
	
	}while(metade <= 0,5);
	
	printf("Massa Final: %f", metade);
}
