#include <stdio.h>

int main(){
	long long int n,equipes=32,sequencia,aux,podios,qtdmodalidades=0,digito;
	float percentual;
	
	for(n=1;n<=equipes;n++){
		
	    printf("Digite a sequencia numerica da equipe %d: ",n);
		scanf("%lld",&sequencia);
		
		aux=sequencia;
		podios=0;
		qtdmodalidades=0;
		
		do{
		    digito=aux%10;
		    
		    if(digito>=1 && digito<=9)
		    qtdmodalidades++;
		    
		    if(digito==1 || digito==2 || digito==3)
		        podios++;
		        
			aux=aux/10;
			
		} while(aux>0);
		
		percentual=((float)podios/qtdmodalidades)*100;
		
		printf("\n\nEquipe %lld com a sequencia: %lld\n",n,sequencia);
		printf("Quantidades de podios: %lld\n",podios);
		printf("Quantidades de modalidades: %lld\n",qtdmodalidades);
		printf("Percentual de podios: %.2f\n\n",percentual);
	}
}
