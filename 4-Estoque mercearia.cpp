/*Faça um algoritmo que receba o preço, o nome, a quantidade em estoque e o tipo (mercearia,
limpeza e perecíveis) de produtos em 34 filiais de uma rede de lojas. Para encerrar a lista de
produtos de uma filial, será inserido o valor -1 na variável de entrada referente ao preço.
Mostre, para cada filial, o valor total (em R$) em estoque. Mostre também a percentagem de
produtos de mercearia, de limpeza e de perecíveis, contando toda as filiais. Por último mostre o
preço do produto mais caro entre todos os produtos lidos e quantas filiais têm menos que R$
60.000,00 em estoque.*/
#include <stdio.h>

int main(void){
	int q,tipo,i,cont60,contm,contl,contp,x;
	float preco,soma,maior,somaq,q1;
	char nome[20];
	cont60=0;
	contm=0;
	contl=0;
	contp=0;
	q1=0;
	
	
	for(i=1;i<=3;i++){
		soma=0;
		printf("\nFilial %d",i);
		printf("\nPreco da mercadoria:");
		scanf("%f",&preco);
		maior=preco;
		x=1;
		soma=0;
		somaq=0;
		do{
			x++;
			printf("Nome da mercadoria:");
			scanf(" %c",&nome);
			printf("Quantidade em estoque:");
			scanf("%d",&q);
			somaq=somaq+q;
			printf("Tipo da mercadoria: Mercearia[1] Limpeza[2] Pereciveis[3]");
			scanf("%d",&tipo);
			if(tipo==1){
				contm=contm+q;
			}
			else{
				if(tipo==2){
					contl=contl+q;
				}
				else{
					contp=contp+q;
				}
			}
			soma=soma+preco;
			printf("Preco da mercadoria %d:",x);
			scanf("%f",&preco);
			if(preco>maior){
				maior=preco;
			}
		}while(preco!=-1);
		q1=contm+contl+contp;
		if((soma*somaq)<60000){
			cont60++;
		}
		printf("Estoque filial %d=%f",i,soma*somaq);
	}
	printf("\nPercentagem:\nMercearia=%2.f%%, Limpeza=%2.f%%, Pereciveis=%2.f%%",(float)(contm*100)/q1,(float)(contl*100)/q1,(float)(contp*100)/q1);
	printf("\nValor do produto mais caro=%f",maior);
	printf("\nFiliais com menos que R$60.000,00 em estoque=%d",cont60);
	
	
	
	
	return 0;
}
