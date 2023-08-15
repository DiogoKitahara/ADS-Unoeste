#include <stdio.h>

int main(void) {
    float base, altura;
    // Pega o valora da base
    printf("Base: ");
    scanf("%f", &base);
    // Pega o valor da altura
    printf("Altura");
    scanf("%f", &altura);
    float area = base * altura / 2;
    printf("O valor da área é %f\n");
}