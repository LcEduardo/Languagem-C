#include <stdio.h>

int main(){
	int ladoA;
	int ladoB;
	int ladoC;
	
	printf("Digite as medidas em cm dos lados a, b e c: ");
	scanf("%d\n%d\n%d", &ladoA, &ladoB, &ladoC);
	
	if((ladoA == ladoB) && (ladoB == ladoC)){
		printf("TRIANGULO EQUILATERO");
	}else if(((ladoA == ladoB) && (ladoB != ladoC)) || ((ladoA == ladoC) && (ladoA != ladoB)) || ((ladoB == ladoC) && (ladoA != ladoC))){
		printf("TRIANGULO ISOCELES");
	}else{
		printf("TRIANGULO ESCALENO");
	}
}
