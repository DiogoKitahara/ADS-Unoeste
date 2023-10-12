#include <stdio.h>
#include <ctype.h>

main() {
	// Declarar variaveis
	int laboratorio, micro, ra, menor_ra, tempo, menor_tempo = 99999, contador_aluno = 0, contador_feminino = 0, contador_masculino = 0, mais_alunos = 0, mais_laboratorio;
	float porcentagem_mulher, porcentagem_homem;
	char sexo;
	// Armazenar numero do laboratorio
	printf("Numero do laboratorio: ");
	scanf("%d", &laboratorio);
	// Loop para laboratorio
	while(laboratorio > 0){
		// Resetar a porcentagem de mulher
		porcentagem_mulher = 0;
		// Armazenar micro
		printf("Numero do micro: ");
		scanf("%d", &micro);
		// Loop para micros
		while(micro > 0) {
			// Armazenar ra, sexo e tempo em minutos
			printf("Numero do RA: ");
			scanf("%d", &ra);
			printf("Sexo: ");
			fflush(stdin);
			scanf(" %c", &sexo);
			sexo = toupper(sexo);
			printf("Tempo em minutos: ");
			scanf("%d", &tempo);
			// contador de alunos
			contador_aluno++;
			// contador mulher
			if (sexo == 'F'){
				contador_feminino++;
			}
			// contador homem
			if (sexo == 'M') {
				contador_masculino++;
			}
			// Ver qual aluno está a menos tempo no micro
			if (tempo < menor_tempo) {
				menor_tempo = tempo;
				menor_ra = ra;
			}
			printf("--------------------------------------------------------------------\n");
			printf("Numero do micro: ");
			scanf("%d", &micro);
		}
		// Ver qual laboratório possui mais alunos
		if (contador_aluno > mais_alunos){
			mais_alunos = contador_aluno;
			mais_laboratorio = laboratorio;
		}
		contador_aluno = 0;
		// Porcentagem de mulheres em cada laboratorio
		porcentagem_mulher = (float) contador_feminino / contador_aluno * 100;
		printf("Porcentagem de mulher: %.2f\n", porcentagem_mulher);
		printf("Aluno com menos tempo no micro: %d\n", menor_ra);
		printf("--------------------------------------------------------------------\n");
		// Armazenar numero do laboratorio
		printf("Numero do laboratorio: ");
		scanf("%d", &laboratorio);
	}
	// Porcentagem de homens entre todos os laboratorios
	porcentagem_homem = (float) contador_masculino / contador_aluno * 100;
	printf("Porcentagem de homem: %.2f\n", porcentagem_homem);
	// Imprimir resultado
	printf("Laboratorio com mais alunos: %d\n", mais_laboratorio);
}
