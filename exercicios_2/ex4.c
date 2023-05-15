#include <stdio.h>

int main(){
	
	float number;
	float produto = 1; 
		
	do{ 
	printf("Digite numeros inteiros, caso queira encerrar digite 0: ");
	scanf("%d", &number); 
	 
	if(number != 0){
		produto *= number;
	}
	
	}while (number != 0);
	
	printf("%.2f", produto);
}
