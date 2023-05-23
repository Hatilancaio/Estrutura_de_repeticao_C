/*Uma empresa far� encomenda de uniformes para seus funcion�rios em suas 27 unidades. Cada
funcion�rio receber� 2 cal�as e 2 blusas de uniforme. Cada unidade possui um n�mero
indeterminado de setores e cada setor escolhe a cor da camiseta (branca, preta ou azul) e o tecido
da cal�a (tactel ou moletom).
Escreva um algoritmo que receba como entrada o n�mero de funcion�rios de cada setor e as
caracter�sticas do seu uniforme (cor da camiseta e tecido da cal�a). O algoritmo N�O deve receber
como entrada o n�mero de setores de cada unidade.
O algoritmo deve fornecer como sa�da, para cada unidade, seu n�mero total de funcion�rios e o
n�mero de setores desta unidade. No final informe QUAL unidade tem mais funcion�rios. Mostre
tamb�m as quantidades de pe�as que ser�o encomendadas (quantidade de camisetas brancas, de
camisetas pretas, de camisetas azuis, de cal�as de tactel e de cal�as de moletom).
*/
#include <stdio.h>

int main(void){
	int i,x,fun,cor,somaf,maior,tecido,contb,contp,conta,contt,z,contm;
	char op,s,n;
	contb=0;
	contp=0;
	conta=0;
	contt=0;
	contm=0;
	maior=0;
	z=0;
	
	
	for(i=1;i<=27;i++){
		x=0;
		somaf=0;
		printf("\nUnidade %d",i);
		do{
			x++;
			printf("\nSetor %d",x);
			printf("\nNumero de funcionarios:");
			scanf("%d",&fun);
			somaf=somaf+fun;
			printf("Escolha a cor da camiseta: Bramca[1] Preta [2] Azul[3]=");
			scanf("%d",&cor);
			if(cor==1){
				contb=contb+fun;
			}
			else{
				if(cor==2){
					contp=contp+fun;
				}
				else{
					conta=conta+fun;
				}
			}
			printf("Escolha o tecido da calca: Tactel[1] Moleton[2]=");
			scanf("%d",&tecido);
			if(tecido==1){
				contt=contt+fun;
			}
			else{
				contm=contm+fun;
			}
			printf("Ir para o proximo setor? s ou n:");
			scanf(" %c",&op);
		}while(op != 'n');
		if(somaf>maior){
			z=i;
		}
		printf("\nNumero de setores=%d",x);
		printf("\nNumero total de funcionarios nesta unidade=%d\n",somaf);
	}
	printf("\nUnidade com mais funcionarios=%d",z);
	printf("\nQuantidade encomendadas:\nCamisas: brancas=%d, pretas=%d, azuis=%d",(2*contb),(2*contp),(2*conta));
	printf("\nCal�as: moletom=%d, tactel=%d",(2*contm),(2*contt));
	
	return 0;
}
