#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main() {
    // Duas cartas já cadastradas (poderiam vir do desafio anterior)
    struct Carta carta1 = {"Brasil", 214000000, 8516000.0, 2.0, 50, 214000000 / 8516000.0};
    struct Carta carta2 = {"Argentina", 46000000, 2780000.0, 0.5, 30, 46000000 / 2780000.0};

    int opcao;

    printf("=== Super Trunfo - Comparação de Cartas ===\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n", carta2.nome);

    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", carta1.nome, carta2.nome);

    switch(opcao) {
        case 1: // População
            printf("População: %s = %d | %s = %d\n", carta1.nome, carta1.populacao, carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área: %s = %.2f | %s = %.2f\n", carta1.nome, carta1.area, carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB: %s = %.2f trilhões | %s = %.2f trilhões\n", carta1.nome, carta1.pib, carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Pontos turísticos: %s = %d | %s = %d\n", carta1.nome, carta1.pontosTuristicos, carta2.nome, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor valor vence)
            printf("Densidade demográfica: %s = %.2f | %s = %.2f\n", carta1.nome, carta1.densidade, carta2.nome, carta2.densidade);
            if (carta1.densidade < carta2.densidade) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.densidade > carta2.densidade) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
