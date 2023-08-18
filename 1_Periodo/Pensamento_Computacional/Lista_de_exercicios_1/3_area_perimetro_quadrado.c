#include <stdio.h>

int main(void) {
    // Pegar o valor da aresta de um quadrado
    float aresta;
    printf("Aresta: ");
    scanf("%f", &aresta);
    // Calcular area
    float area = aresta * aresta;
    // Calcular perímetro
    float perimetro = aresta * 4;
    // Printar o valor da área e perímetro
    printf("Área: %.2f\nPerímetro: %.2f",area, perimetro);
}
