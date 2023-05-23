/*Durante 6 meses, 30 funcionários de um shopping participaram de um programa de exercícios
ocupacionais. Durante o programa foram registrados, para cada funcionário, sua idade, medições
mensais de frequência cardíaca e várias medições do peso corporal. Elabore um algoritmo que,
para cada funcionário, mostre seu peso médio e a maior frequência cardíaca registrada durante o
programa. No final mostre ainda a percentagem de funcionários que tiveram sua maior frequência
cardíaca ultrapassando 105 bpm e quantos tiveram o peso médio maior que seu peso final,
quantos tiveram o peso médio menor que seu peso final e quantos forram iguais.
obs.: Na leitura das medições do peso, utilize o valor -1 para indicar que a sequência de medições
finalizou (o valor -1 na entrada é o código para a parada da estrutura de repetição e não deve ser
processado). Considere que os valores de peso e frequência cardíaca são valores reais.*/
#include <stdio.h>

int main(void){
	int idade,fun,mes,contpeso,contfreq,medmaior,medmenor,medigual;
	float freq,peso,somapeso,maior,pesomed,pesofinal;
	contfreq=0;
	
	for(fun=1;fun<=30;fun++){
		printf("\nIdade:");
		scanf("%d",&idade);
		printf("\nFrequencia cardiaca (bpm):");
		scanf("%f",&freq);
		maior=freq;
		for(mes=2;mes<=6;mes++){
			printf("Frequencia cardiaca (bpm):");
			scanf("%f",&freq);
			if(freq>maior){
				maior=freq;
			}
		}
		if(maior > 105){
			contfreq++;
		}printf("Maior frequencia cardiaca=%f",maior);
		printf("\nPeso corporal:");
		scanf("%f",&peso);
		contpeso=0;
		somapeso=0;
		do{
			somapeso=somapeso+peso;
			contpeso++;
			pesofinal=peso;
			printf("Peso corporal:");
			scanf("%f",&peso);	
			
		}while(peso != -1);
		pesomed=somapeso/contpeso;
		if(pesomed>pesofinal){
			medmaior++;
		}
		else{
			if (pesomed==pesofinal){
				medigual++;
			}
			else{
				medmenor++;
			}
		}
		
		
		printf("\nPeso medio=%f",pesomed);
	}printf("\nPorcentagem de funcionarios com frequencia cardiaca maior que 105 bpm=%d",(contfreq*100)/(fun-1));
	printf("\n%d tiveram peso medio maior que o peso final",medmaior);
	printf("\n%d tiveram peso medio menor que o seu peso final",medmenor);
	printf("\n%d tiveram peso medio igual ao seu peso final",medigual);
	
	
	
	return 0;
}
