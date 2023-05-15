#include<stdio.h>

int main(){
	int valor1;
	int valor2;
	int valor3;
	
	printf("Digite tres valores inteiros: ");
	scanf("%d\n%d\n%d", &valor1, &valor2, &valor3);
	
	if((valor1 != valor2) && (valor2 != valor3) && (valor1 != valor3)){
		 if((valor1 < valor2) && (valor2 < valor3) && (valor1 < valor3)){
			printf("%d\n%d\n%d", valor1, valor2, valor3);
		} else if((valor2 < valor1) && (valor2 < valor3) && (valor3 < valor1)){
			printf("%d\n%d\n%d", valor2, valor3, valor1);
		} else if((valor3 < valor1) && (valor3 < valor2) && (valor2 < valor1)){
			printf("%d\n%d\n%d", valor3, valor2, valor1);
		} else if((valor1 < valor2) && (valor1 < valor3) && (valor3 < valor2)){
			printf("%d\n%d\n%d", valor1, valor3, valor2);
		} else if((valor2 < valor1) && (valor2 < valor3) && (valor1 < valor3)){
			printf("%d\n%d\n%d", valor2, valor1, valor3);
		} else if((valor3 < valor2) && (valor3 < valor1) && (valor1 < valor2)){
			printf("%d\n%d\n%d", valor3, valor1, valor2);
		}
	}else{
		printf("Nao pode valores iguais");
	}
}
