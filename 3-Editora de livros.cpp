/*Uma editora pretende fazer uma an�lise estat�stica sobre os dados de seus pedidos nos �ltimos
anos. Fa�a um algoritmo que receba como entrada, para cada pedido realizado no per�odo, o
n�mero de livros encomendados e, para cada livro, receba o seguimento do livro (Fundamental,
M�dio ou Superior) e se o livro teve incentivo fiscal ou n�o. Para encerrar a coleta dos dados, ser�
digitado o c�digo -1 na vari�vel de entrada referente ao n�mero de livros do pedido.
Ap�s o encerramento das leituras, o algoritmo deve imprimir o seguinte relat�rio:
- Porcentagem de livros de cada seguimento,
- N�mero total de livros que n�o receberam incentivo fiscal,
- M�dia de livros por pedido no per�odo.
- Quantos pedidos tiveram mais de 20 livros com incentivo fiscal,
- Quantos livros tinha o maior pedido.*/
#include <stdio.h>

int main (void){

	int naoInsentivo, fundamental, medio, superior, NumPedidos, contmais20, contLivros, quantidade, maior, i, segmento, insentivo;
	
	naoInsentivo = 0;
	fundamental = 0;
	medio = 0;
	superior = 0;
	NumPedidos = 0;
	contmais20 = 0;
	
	printf("\n\nQuantidade de livros do pedido: ");
	scanf("%d",&quantidade);
	maior = quantidade;
	while (quantidade != -1){
		NumPedidos++;
		contLivros = 0;
		for (i = 1; i <= quantidade; i++){
	        printf("\nSegmento do livro %d: ", i);
	        printf("\n[1]Fundamental [2]M�dio [3]Superior: ");
	        scanf("%d",&segmento);
	        printf("\nRecebeu insentivo? [1]Sim [0]N�o: ");
	        scanf("%d",&insentivo);
	
			if (!insentivo)
				naoInsentivo++;
	        else
				contLivros++;
	
			if (segmento == 1)
				fundamental++;
			else
				if (segmento == 2)
					medio++;
				else
					superior++;
		}
	
		if (quantidade > maior)
			maior = quantidade;
	
		if (contLivros > 2)
			contmais20++;
	
		printf("\n\nQuantidade de livros do pedido: ");
	    scanf("%d",&quantidade);
	}
	
	contLivros = fundamental + medio + superior;
	printf ("\nPorcentagem de cada segmento. Fundamental: %.2f%%, M�dio: %.2f%% e Superior: %.2f%%",(float)fundamental*100/contLivros, (float)medio*100/contLivros, (float)superior*100/contLivros);
	printf ("\n Quantidade de livros sem insentivo: %d", naoInsentivo);
	printf ("\nM�dia de livros por pedido: %.2f", (float)contLivros/NumPedidos);
	printf ("\npedidos com mais de 20 livros com insentivo: %d", contmais20);
	printf ("\nMaior pedido: %d livros", maior);

}
