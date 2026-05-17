#include <stdio.h>

int main(){
	float distotal,disacumulada=0,disdiaria,disrestante,velmeddiaria,velmedtotal;
	int ttotal=0,tempo,dias=0;
	
	printf("Digite a distancia total do percurso: ");
	scanf("%f",&distotal);
	
	do{
		dias++;
		printf("\nDigite a distancia percorrida no dia %d: ",dias);
		scanf("%f",&disdiaria);
		printf("Tempo decorrido no dia %d: ",dias);
		scanf("%d",&tempo);
		
		velmeddiaria=(float)disdiaria/(tempo/60.0);
		printf("Velocidade media do dia %d: %.2f\n",dias,velmeddiaria);
		
		disacumulada=disacumulada+disdiaria;
		disrestante=distotal-disacumulada;
		
		if(disrestante < 0)
			disrestante = 0;
        
		ttotal=ttotal+tempo;
		
		printf("Distancia restante: %.2f\n",disrestante);
		
	} while(distotal>disacumulada);
	
	printf("Dias de percurso: %d\n",dias);
	
	velmedtotal=(float)disacumulada/(ttotal/60.0);
	printf("Velocidade media: %.2f",velmedtotal);	
}
