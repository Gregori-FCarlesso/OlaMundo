#include <stdio.h>

int main(){
	int pontoA,pontoB,vitoriasA=0,vitoriasB=0,jogos=0;
	
	printf("Disputa entre equipe A e equipe B\n");
	
	do{
		jogos++;
		
		do{
		printf("\nJogo %d\n",jogos);
		
		printf("Pontos equipe A (0 a 20): ");
		scanf("%d",&pontoA);
		printf("Pontos equipe B (0 a 20): ");
		scanf("%d",&pontoB);
		
		if(pontoA<0 || pontoA>20 || pontoB<0 || pontoB>20)
		    printf("\nVerifique os valores das entradas...\n");
		    
		} while(pontoA<0 || pontoA>20 || pontoB<0 || pontoB>20);
		
		if(pontoA>pontoB)
		    vitoriasA++;
		else if(pontoA<pontoB)
		    vitoriasB++;
		    
	} while(vitoriasA<4 && vitoriasB<4);
	
	printf("Quantidade de jogos realizados: %d\n",jogos);
	printf("Vitorias do time A: %d\n",vitoriasA);	
	printf("Vitorias do time B: %d\n",vitoriasB);
	
	if(vitoriasA>vitoriasB)
		printf("O time A e o vencedor.");
	else
		printf("O time B e o vencedor.");
}
