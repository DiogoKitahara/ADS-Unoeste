#include <stdio.h>

int main(void) {
    // Pegar notas e pesos
    float nota1, peso1, nota2, peso2;
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Peso 1: ");
    scanf("%f", &peso1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Peso 2: ");
    scanf("%f", &peso2);
    // Calcular e exibir a m�dia ponderada das notas
    float media_ponderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
    printf("M�dia Ponderada = %.2f", media_ponderada);
}
