#include <stdio.h>

int main(void) {
    float base, altura, area;
    // Pegando valor da base
    printf("Base do tri�ngulo: ");
    scanf("%f", &base);
    // Pegando valor da altura
    printf("Altura do tri�ngulo: ");
    scanf("%f", &altura);
    // Calculo da �rea com base na altura e base escritos
    area = base * altura / 2;
    // Informar a �rea
    printf("O valor da �rea do tri�ngulo � de %.2f",area);
}
