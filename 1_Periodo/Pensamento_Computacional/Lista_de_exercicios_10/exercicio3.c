#include <stdio.h>

main() {
    // Declarar variaveis
    int i, maior_mes, menor_mes;
    float vetor_temperatura[12], maior_temperatura = 0, menor_temperatura = 100;
    // Loop repete 12 vezes
    for (i = 0; i < 12; i++) {
        // Armazenar media das temperaturas de cada mes
        printf("Media da temperatura do mes %d: ", i + 1);
        scanf("%f", &vetor_temperatura[i]);
        // Encontrar a maior temperatura do ano, armazenar o valor e o mes
        if (vetor_temperatura[i] > maior_temperatura) {
            maior_temperatura = vetor_temperatura[i];
            maior_mes = i + 1;
        }
        // Encontrar a menor temperatura do ano, armazenar o valor e o mes
        if (vetor_temperatura[i] < menor_temperatura) {
            menor_temperatura = vetor_temperatura[i];
            menor_mes = i + 1;
        }
    }
    // Imprimir resultados
    printf("------------------------------------------------------\n");
    printf("O mes %d teve a maior temperatura de %.2f°C\n", maior_mes, maior_temperatura);
    printf("O mes %d teve a menor temperatura de %.2f°C\n", menor_mes, menor_temperatura);
}