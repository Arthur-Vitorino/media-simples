#include <stdio.h>

int main(){
	float notaA, notaB, notaC, notaFinal;
	
	printf("Insira as 3 notas: ");
	scanf("%f %f %f", &notaA, &notaB, &notaC);
	
	notaFinal = (notaA + notaB + notaC) / 3.0;
	printf("\nNota Final: %.2f", notaFinal);
}
