#include <stdio.h>

int main(void) {
    // Pegar o valor da aresta de um quadrado
    float aresta;
    printf("Aresta: ");
    scanf("%f", &aresta);
    // Calcular area
    float area = aresta * aresta;
    // Calcular per�metro
    float perimetro = aresta * 4;
    // Printar o valor da �rea e per�metro
    printf("�rea: %.2f\nPer�metro: %.2f",area, perimetro);
}
