#include <stdio.h>

main() {
	// Declarar variaveis
	int nota_fiscal, codigo_produto, quantidade, maior_quantidade = 0, menor_quantidade = 99999;
	float valor_final_nota = 0, total_vendas = 0, valor_unitario, valor_total_produto, menor_preco = 99999, maior_preco = 0, menor_venda = 999999;
	// Armazenar numero da nota fiscal
	printf("Numero da nota fiscal: ");
	scanf("%d", &nota_fiscal);
	// Loop para nota fiscal
	while (nota_fiscal > 0){
		// Zerar a nota para calcular o valor da nota fiscal
		valor_final_nota = 0;
		// Armazenar codigo do produto
		printf("Codigo do produto: ");
		scanf("%d", &codigo_produto);
		// Loop para o codigo
		while (codigo_produto) {
			// Armazenar codigo do produto, valor unitario, quantidade vendida
			printf("Valor unitario: ");
			scanf("%f", &valor_unitario);
			printf("Quantidade vendida: ");
			scanf("%d", &quantidade);
			// Produto com maior quantidade
			if (quantidade > maior_quantidade) {
				maior_quantidade = quantidade;
			}
			// Produto com menor quantidade
			if (quantidade < menor_quantidade) {
				menor_quantidade = quantidade;
			}
			// Produto com maior preco
			if (valor_unitario > maior_preco) {
				maior_preco = valor_unitario;
			}
			// Produto com maior preco
			if (valor_unitario < menor_preco) {
				menor_preco = valor_unitario;
			}
			// Calcular o valor total do produto
			valor_total_produto = valor_unitario * quantidade;
			// Somatorio dos valores dos codigos
			valor_final_nota += valor_total_produto;
			// Imprimir resultado
			// Armazenar codigo do produto
			printf("Codigo do produto: ");
			scanf("%d", &codigo_produto);
		}
		// Nota fiscal com menor venda
		if (valor_final_nota < menor_venda) {
			menor_venda = valor_final_nota; 
		}
		// Calcular o valor total de vendas
		total_vendas += valor_final_nota;
		// Imprimir total de venda de cada nota fiscal
		printf("Total de venda de cada nota fiscal: %.2f\n", valor_final_nota);
		// Armazenar numero da nota fiscal
		printf("Numero da nota fiscal: ");
		scanf("%d", &nota_fiscal);
	}	
}
