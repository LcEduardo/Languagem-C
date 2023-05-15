#include<stdio.h>

int main(){
	float pesoIdeal;
	float altura;
	int genero;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("Genero masculino:1\n Genero feminino:2");
	scanf("%d", &genero);
	
	if(genero == 1){
		pesoIdeal=(72.7*altura)-58;
		printf("Peso Ideal: \n%.2f", pesoIdeal);
	}else{
		pesoIdeal=(62.1*altura)-44.7;
		printf("Peso Ideal: \n%.2f", pesoIdeal);
	}	
}
