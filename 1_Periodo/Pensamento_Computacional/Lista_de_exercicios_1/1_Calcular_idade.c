#include <stdio.h>
#include <ctype.h>

main() {
// Declarar variáveis
char categoria, situacao, continuar;
float preco;
// Loop
do {
    // Armazenar preco
    printf("Preco: ");
    scanf("%f", &preco);
    // Armazenar categoria e deixar maiusculo
    printf("1 - Limpeza\n");
    printf("2 - Alimentacao\n");
    printf("3 - Vestuario\n");
    printf("Categoria: ");
    fflush(stdin);
    scanf("%c", &categoria);
    categoria = toupper(categoria);
    // Armazenar situacao e deixar maiusculo
    printf("Situacao [: ");
    fflush(stdin);
    scanf("%c", &situacao);
    categoria = toupper(categoria);
    
    
    // Armazenar resposta e deixar maiusculo
    printf("Deseja continuar [S para sim / N para nao]? ");
    fflush(stdin);
    scanf("%c", &continuar);
    continuar = toupper(continuar);
    }
}