#include <stdio.h>

int main(){
	
	int lados;
	float area;
	int medida;
	//Pentagono
	int apotema;
	//Triangulo
	int altura;
	int continuar;
	
	do{
		
	printf("Digite o numero de lados: ");
	scanf("%d", &lados);
	
	if(lados == 3){
		printf("TRIANGULO\n");
		printf("Digite a medida dos lados em cm e altura: \n");
		scanf("%d\n%d", &medida, &altura);
		area = (medida*altura)/2;
		printf("Area: %.2f\n", area);
		printf("Para continuar digite 1:");
		scanf("%d", &continuar);
	}else if(lados == 4){
		printf("QUADRADO\n");
		printf("Digite a medida dos lados em cm: \n");
		scanf("%d", &medida);
		area = medida*4;
		printf("Area: %.2f\n", area);
		printf("Para continuar digite 1:");
		scanf("%d", &continuar);
	}else if(lados == 5){
		printf("PENTAGONO\n");
		printf("Digite a medida dos lados em cm e a apotema: \n");
		scanf("%d\n%d", &medida, &apotema);
		area = ((5*medida)*apotema)/2;
		printf("Area: %.2f\n", area);
		printf("Para continuar digite 1:");
		scanf("%d", &continuar);
	}else if(lados > 5){
		printf("Poligono nao identificado\n TENTE NOVAMENTE.\n");
		printf("Para continuar digite 1:");
		scanf("%d", &continuar);
	}else{
		printf("Nao e um Poligono\n");
		printf("Para continuar digite 1:");
		scanf("%d", &continuar);
	}
  }while(continuar == 1);
}
