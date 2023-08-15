#include <stdio.h>

int main(void) {
    float base, altura, area;
    // Pegando valor da base
    printf("Base do triângulo: ");
    scanf("%f", &base);
    // Pegando valor da altura
    printf("Altura do triângulo: ");
    scanf("%f", &altura);
    // Calculo da área com base na altura e base escritos
    area = base * altura / 2;
    // Informar a área
    printf("O valor da área do triângulo é de %.2f",area);
}
