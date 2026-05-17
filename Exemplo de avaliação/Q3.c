#include <stdio.h>

int main(){
	int jurado,njurados,natleta;
	float menor,maior,nota,media,soma;
	
	printf("Digite a quantidade de jurados: ");
	scanf("%d",&njurados);
	
	printf("Digite o numero do atleta: ");
	scanf("%d",&natleta);
	printf("\n");
	
	if(natleta!=0){
	while(natleta!=0){
		
	    soma=0;
	    menor=9.8;
	    maior=1.2;
	    
	    for(jurado=1;jurado<=njurados;jurado++){
	    	
	    	do{
	    		printf("Digite a nota do jurado %d: ",jurado);
	    		scanf("%f",&nota);
	    		
	    		if(nota<1.19 || nota>9.81)
	    		    printf("Verifique os valores possiveis...\n\n");  
			} while((nota<1.19 || nota>9.81));
			
			soma=soma+nota;
			
			if(nota<menor)
			    menor=nota;
			if(nota>maior)
			    maior=nota; 
		}
	    
	    media=(float)(soma-menor-maior)/(njurados-2);
	    printf("\n\nAtleta numero %d\n\n",natleta);
	    printf("Media final: %.2f\n",media);
	    printf("Menor nota (descartada): %.2f\n",menor);
	    printf("Maior nota (descartada): %.2f\n",maior);
	    printf("\nDigite o numero do proximo atleta: ");
		scanf("%d",&natleta);
		printf("\n");
		}
	}
	
	else{
		printf("Sem atletas para ser avaliados.");
	}
}
