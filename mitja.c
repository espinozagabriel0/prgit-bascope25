#include <stdio.h>

int main() {
	float suma=0;
	float mitja;
	float nou_valor;
	int numero_repeticions=0;
	char consulta='s';
	
	while(consulta=='s') {
		printf("bascope25 Dòna la següent dada: ");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("bascope25 Vols continuar (s/n): ");
		scanf(" %c",&consulta); 
	}
	mitja=suma/numero_repeticions;
	printf("bascope25 La mitja és: %.2f\n",mitja);	
	return 0;
}

