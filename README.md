Este repositório, contém alguns exercicios envolvendo estrutura de repetição
em linguagem C, passados na matéria de Lógica de programação, no curso de 
Ciência da Computação UFT.
Segue as questões abaixo:
    1-Durante 6 meses, 30 funcionários de um shopping participaram de um programa de exercícios
    ocupacionais. Durante o programa foram registrados, para cada funcionário, sua idade, medições
    mensais de frequência cardíaca e várias medições do peso corporal. Elabore um algoritmo que,
    para cada funcionário, mostre seu peso médio e a maior frequência cardíaca registrada durante o
    programa. No final mostre ainda a percentagem de funcionários que tiveram sua maior frequência
    cardíaca ultrapassando 105 bpm e quantos tiveram o peso médio maior que seu peso final,
    quantos tiveram o peso médio menor que seu peso final e quantos forram iguais.
    obs.: Na leitura das medições do peso, utilize o valor -1 para indicar que a sequência de medições
    finalizou (o valor -1 na entrada é o código para a parada da estrutura de repetição e não deve ser
    processado). Considere que os valores de peso e frequência cardíaca são valores reais.

    2-Uma cooperativa de produtores rurais possui um armazém para armazenagem de arroz, feijão e
    milho. Cada produtor chega com o seu carregamento e este é contabilizado e armazenado. As
    sacas que contém produto orgânico, recebem um selo.
    Faça um algoritmo que receba como entrada, para cada produtor, o número de sacas entregues e,
    para cada saca, seu conteúdo (arroz, feijão ou milho) e se é orgânico ou não. Para encerrar as
    atividades do dia, será digitado o código -1 na variável de entrada referente ao número de sacas.
    Após o encerramento das atividades, o algoritmo deve imprimir o seguinte relatório:
    - Porcentagem de sacas que receberam o selo orgânico,
    - Quantidades de sacas recebidas de cada grão,
    - Quantidade de sacas da maior entrega do dia,
    - Quantos produtores entregaram mais de 15 sacas de arroz,
    - Média de sacas entregue por produtor.

    3-Uma editora pretende fazer uma análise estatística sobre os dados de seus pedidos nos últimos
    anos. Faça um algoritmo que receba como entrada, para cada pedido realizado no período, o
    número de livros encomendados e, para cada livro, receba o seguimento do livro (Fundamental,
    Médio ou Superior) e se o livro teve incentivo fiscal ou não. Para encerrar a coleta dos dados, será
    digitado o código -1 na variável de entrada referente ao número de livros do pedido.
    Após o encerramento das leituras, o algoritmo deve imprimir o seguinte relatório:
    - Porcentagem de livros de cada seguimento,
    - Número total de livros que não receberam incentivo fiscal,
    - Média de livros por pedido no período.
    - Quantos pedidos tiveram mais de 20 livros com incentivo fiscal,
    - Quantos livros tinha o maior pedido

    4-Faça um algoritmo que receba o preço, o nome, a quantidade em estoque e o tipo (mercearia,
    limpeza e perecíveis) de produtos em 34 filiais de uma rede de lojas. Para encerrar a lista de
    produtos de uma filial, será inserido o valor -1 na variável de entrada referente ao preço.
    Mostre, para cada filial, o valor total (em R$) em estoque. Mostre também a percentagem de
    produtos de mercearia, de limpeza e de perecíveis, contando toda as filiais. Por último mostre o
    preço do produto mais caro entre todos os produtos lidos e quantas filiais têm menos que R$
    60.000,00 em estoque.

    5-Uma empresa fará encomenda de uniformes para seus funcionários em suas 27 unidades. Cada
    funcionário receberá 2 calças e 2 blusas de uniforme. Cada unidade possui um número
    indeterminado de setores e cada setor escolhe a cor da camiseta (branca, preta ou azul) e o tecido
    da calça (tactel ou moletom).
    Escreva um algoritmo que receba como entrada o número de funcionários de cada setor e as
    características do seu uniforme (cor da camiseta e tecido da calça). O algoritmo NÃO deve receber
    como entrada o número de setores de cada unidade.
    O algoritmo deve fornecer como saída, para cada unidade, seu número total de funcionários e o
    número de setores desta unidade. No final informe QUAL unidade tem mais funcionários. Mostre
    também as quantidades de peças que serão encomendadas (quantidade de camisetas brancas, de
    camisetas pretas, de camisetas azuis, de calças de tactel e de calças de moletom).