#include <stdio.h>

int main(){
	float massa, hora, massaatual;
	int minutos, segundos,tempo = 0 ;
	printf("Massa em gramas: ");
	scanf("%f", &massa);
	massaatual = massa;
	while (massaatual > 0.5){
		massaatual -= massaatual / 2;
		tempo += 50;
	}
	printf("%0.2f\n%d", massaatual, tempo);
	hora = (tempo/60)/ 60;
	minutos = (tempo - hora)/60;
	segundos = tempo - minutos*60;
	printf("Massa: %0.2f\nMassa Atual: %0.0f\nTempo gasto: %0.0fhoras %dmin %dseg", massa, massaatual, hora, minutos, segundos, massaatual);
}
