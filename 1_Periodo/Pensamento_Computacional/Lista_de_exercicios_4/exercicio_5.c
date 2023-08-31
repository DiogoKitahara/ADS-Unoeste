#include <stdio.h>

main() {
    // Declarar variaveis
    int idade, ano_contratacao, matricula;
    float salario_base, salario_final;
    char sexo;
    // Armazenar idade, sexo, salario base, ano contratação e matricula
    printf("Idade: \n");
    scanf("%i", &idade);
    printf("Sexo: \n");
    fflush(stdin);
    scanf("%c", &sexo);
    printf("Ano contratacao: \n");
    scanf("%i", &ano_contratacao);
    printf("Matricula: \n");
    scanf("%i", &matricula);
    printf("Salario: \n");
    scanf("%f", &salario_base);
    // Se idade >= 18 && <= 39
    if (idade >= 18 && idade <= 39) {
        // Se M, 10% de reajuste
        if (sexo == 'M'){
            if ()
        }
        // Se F, 8% de reajuste
    }
    // Senão se idade >= 40
        // Se M, 8% de reajuste
        // Se F, 10% de reajuste
    // Senão se idade >= 70
        // Se M, 15% de reajuste
        // Se F, 17% de reajuste
}