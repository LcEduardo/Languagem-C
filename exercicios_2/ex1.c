#include <stdio.h>

int main(){
	int num1, num2, num3, num4, num5;
	int menor, maior; 
	printf("Digites tres numeros inteiros: ");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

//Determine o numero menor
if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
	maior = num1;
}
else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){
	maior = num2;
}
else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){
	maior = num3;
}
else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){
	maior = num4;
}
else {
	maior = num5;
}

//Determine o menor numero
if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5){
	menor = num1;
}
else if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5){
	menor = num2;
}
else if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5){
	menor = num3;
}
else if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5){
	menor = num4;
}
else {
	menor = num5;
}

printf("O maior valor é %d e o menor %d \n", maior, menor);
}
