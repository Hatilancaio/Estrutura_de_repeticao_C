/*Uma cooperativa de produtores rurais possui um armaz�m para armazenagem de arroz, feij�o e
milho. Cada produtor chega com o seu carregamento e este � contabilizado e armazenado. As
sacas que cont�m produto org�nico, recebem um selo.
Fa�a um algoritmo que receba como entrada, para cada produtor, o n�mero de sacas entregues e,
para cada saca, seu conte�do (arroz, feij�o ou milho) e se � org�nico ou n�o. Para encerrar as
atividades do dia, ser� digitado o c�digo -1 na vari�vel de entrada referente ao n�mero de sacas.
Ap�s o encerramento das atividades, o algoritmo deve imprimir o seguinte relat�rio:
- Porcentagem de sacas que receberam o selo org�nico,
- Quantidades de sacas recebidas de cada gr�o,
- Quantidade de sacas da maior entrega do dia,
- Quantos produtores entregaram mais de 15 sacas de arroz,
- M�dia de sacas entregue por produtor.*/
#include <stdio.h>

int main (void){

	int contOrganico, contArroz, contFeijao, contMilho, contProdutor, contmais15, contSacas, quantidade, maior, i;
	int grao;
	int organico;
	
	contOrganico = 0;
	contArroz = 0;
	contFeijao = 0;
	contMilho = 0;
	contProdutor = 0;
	contmais15 = 0;
	
	printf("\n\nQuantidade de sacas: ");
	scanf("%d",&quantidade);
	maior = quantidade;
	while (quantidade != -1){
		contProdutor = contProdutor + 1;
		contSacas = 0;
		for (i = 1; i <= quantidade; i++){
	        printf("\nSaca %d: ", i);
	        printf("\n[1]Arroz [2]Feij�o [3]Milho: ");
	        scanf("%d",&grao);
	        printf("\n[1]Org�nico [0]N�o org�nico: ");
	        scanf("%d",&organico);
	
			if (organico)
				contOrganico = contOrganico + 1;
			if (grao == 1){
				contArroz = contArroz + 1;
				contSacas = contSacas + 1;
			}else{
				if (grao == 2)
					contFeijao = contFeijao + 1;
				else
					contMilho = contMilho + 1;
	
			}
		}
		printf("\n\nQuantidade de sacas: ");
	    scanf("%d",&quantidade);
		if (quantidade > maior)
			maior = quantidade;
	
		if (contSacas > 15)
			contmais15 = contmais15 + 1;
	}
	printf ("\nPorcentagem de sacas que receberam o selo org�nico: %.2f%%", (float)(contOrganico*100)/(contArroz + contFeijao + contMilho));
	printf ("\nQuantidades de sacas recebidas de arroz: %d, de feij�o: %d e de milho: %d",contArroz, contFeijao, contMilho);
	printf ("\nQuantidade de sacas da maior entrega do dia: %d", maior);
	printf ("\nQuantos produtores entregaram mais de 15 sacas de arroz: %d", contmais15);
	printf ("\nM�dia de sacas entregue por produtor: %.2f", (float)(contArroz + contFeijao + contMilho)/contProdutor);
}
