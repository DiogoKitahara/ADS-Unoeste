#include <stdio.h>

main() {
    // Declarar variaveis
    int i = 0, chapa_votada, chapa1 = 0, chapa2 = 0, chapa3 = 0;
    // Loop 200 vezes
    while(i < 5)
    {
        // Armazenar a chapa votada
        printf("Chapa votada [1 = chapa 1 / 2 = chapa 2 / 3 = chapa 3]: ");
        scanf("%d", &chapa_votada);
        // Switch case
        switch (chapa_votada) {
            // Se 1, chapa1++
            case 1: 
                chapa1++;
                break;
            // Se 2, chapa2++
            case 2: 
                chapa2++;
                break;
            // Se 3, chapa3++
            case 3: 
                chapa3++;
                break;
            // Senão, opcao invalida
            default: printf("Opcao invalida\n");
        }
        // incrementar +1 no i 
        i++;
    }
    // Imprimir o resultado final
    printf("Resultado\n");
    printf("Chapa 1: %d votos\n", chapa1);
    printf("Chapa 2: %d votos\n", chapa2);
    printf("Chapa 3: %d votos\n", chapa3);
}