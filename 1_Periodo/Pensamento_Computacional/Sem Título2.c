#include <stdio.h>
#include <ctype.h>

main() {
	// Declarar variaveis
	int laboratorio, micro, ra, menor_ra, tempo, menor_tempo = 99999, contador_aluno = 0, contador_feminino = 0, contador_masculino = 0;
	float porcentagem_mulher;
	char sexo;
	// Armazenar numero do laboratorio
	printf("Numero do laboratorio: ");
	scanf("%d", &laboratorio);
	// Loop para laboratorio
	while(laboratorio > 0){
		// Resetar a porcentagem de mulher
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
			printf("Numero do micro: ");
			scanf("%d", &micro);
		}
		// Porcentagem de mulheres em cada laboratorio
		porcentagem_mulher = (float) contador_feminino / contador_aluno * 100;
		printf("Porcentagem de mulher: %.2f\n", porcentagem_feminino);
		// Armazenar numero do laboratorio
		printf("Numero do laboratorio: ");
		scanf("%d", &laboratorio);
	}
	// Ver qual laboratório possui mais alunos
	// Porcentagem de homens entre todos os laboratorios
}
