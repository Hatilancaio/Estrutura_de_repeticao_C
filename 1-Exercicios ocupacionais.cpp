/*Durante 6 meses, 30 funcion�rios de um shopping participaram de um programa de exerc�cios
ocupacionais. Durante o programa foram registrados, para cada funcion�rio, sua idade, medi��es
mensais de frequ�ncia card�aca e v�rias medi��es do peso corporal. Elabore um algoritmo que,
para cada funcion�rio, mostre seu peso m�dio e a maior frequ�ncia card�aca registrada durante o
programa. No final mostre ainda a percentagem de funcion�rios que tiveram sua maior frequ�ncia
card�aca ultrapassando 105 bpm e quantos tiveram o peso m�dio maior que seu peso final,
quantos tiveram o peso m�dio menor que seu peso final e quantos forram iguais.
obs.: Na leitura das medi��es do peso, utilize o valor -1 para indicar que a sequ�ncia de medi��es
finalizou (o valor -1 na entrada � o c�digo para a parada da estrutura de repeti��o e n�o deve ser
processado). Considere que os valores de peso e frequ�ncia card�aca s�o valores reais.*/
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
