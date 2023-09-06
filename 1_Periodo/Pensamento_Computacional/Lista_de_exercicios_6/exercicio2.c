#include <stdio.h>
#include <ctype.h>

main() {
	// Declarar variaveis
	int refeicoes, cont_total = 0, cont_menos_10 = 0, cont_entre_10_20 = 0, cont_mais_20 = 0;
	char pessoas;
	// Armazenar a resposta
	printf("Possui mais alunos(S / N) ");
	scanf("%c", &pessoas);
	pessoas = toupper(pessoas);
	// Loop at� char != 'N'
	while (pessoas == 'S'){
		// Perguntar refeicao
		printf("Refeicoes no mes: ");
		scanf("%d", &refeicoes);
		// contar o n�mero de todos os alunos entrevistados
		cont_total++;
		// contar alunos menos de 10 refei��es
		if (refeicoes < 10){
			cont_menos_10++;
		}
		// contar alunos entre 10 e 20 refei��es
		if (refeicoes >= 10 && refeicoes <=20){
			cont_entre_10_20++;
		}
		// contar alunos com mais de 20 refei��es
		if (refeicoes > 20){
			cont_mais_20++;
		}
		// Perguntar de novo
		printf("Possui mais alunos(S / N) ");
		scanf("%c", &pessoas);
	}
	// Imprimir a quantidade de alunos
	printf("Total de alunos entrevistados: %d\nAlunos com menos de 10 refeicoes: %d\nAlunos entre 10 e 20 refeicoes: %d\nAlunos com mais de 20 refeicoes", cont_total, cont_menos_10, cont_entre_10_20, cont_mais_20);
	
}
