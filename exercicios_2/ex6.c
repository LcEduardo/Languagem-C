#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if((numero >= 1000) && (numero <= 1999)){
		if(numero % 11 ==5){
			printf("Esse numero tem resto 5: %d", numero);
		}else{
			printf("Esse numero n�o tem resto 5: %d", numero);
		}
 	}else{
 		printf("Numero n�o correspondente.");
	 }
}
