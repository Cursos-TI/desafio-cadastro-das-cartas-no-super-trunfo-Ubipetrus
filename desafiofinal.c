#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de país
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main() {
    // Duas cartas pré-cadastradas
    struct Carta carta1 = {"Brasil", 214000000, 8516000.0, 2.0, 25, 25.1};
    struct Carta carta2 = {"Argentina", 47000000, 2780000.0, 0.6, 15, 16.9};

    int atributo1, atributo2;
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2;
    float soma_c1, soma_c2;

    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n");
    printf("Comparando cartas: %s x %s\n\n", carta1.nome, carta2.nome);

    // -------- Escolha do primeiro atributo --------
    printf("Escolha o primeiro atributo:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // -------- Escolha do segundo atributo (dinâmico) --------
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue; // não mostra o já escolhido
        switch (i) {
            case 1: printf("1. Populacao\n"); break;
            case 2: printf("2. Area\n"); break;
            case 3: printf("3. PIB\n"); break;
            case 4: printf("4. Pontos Turisticos\n"); break;
            case 5: printf("5. Densidade Demografica\n"); break;
        }
    }
    printf("Opcao: ");
    scanf("%d", &atributo2);

    // -------- Obter valores dos atributos escolhidos --------
    switch (atributo1) {
        case 1: valor1_c1 = carta1.populacao; valor1_c2 = carta2.populacao; break;
        case 2: valor1_c1 = carta1.area; valor1_c2 = carta2.area; break;
        case 3: valor1_c1 = carta1.pib; valor1_c2 = carta2.pib; break;
        case 4: valor1_c1 = carta1.pontosTuristicos; valor1_c2 = carta2.pontosTuristicos; break;
        case 5: valor1_c1 = carta1.densidade; valor1_c2 = carta2.densidade; break;
        default: printf("Atributo invalido!\n"); return 0;
    }

    switch (atributo2) {
        case 1: valor2_c1 = carta1.populacao; valor2_c2 = carta2.populacao; break;
        case 2: valor2_c1 = carta1.area; valor2_c2 = carta2.area; break;
        case 3: valor2_c1 = carta1.pib; valor2_c2 = carta2.pib; break;
        case 4: valor2_c1 = carta1.pontosTuristicos; valor2_c2 = carta2.pontosTuristicos; break;
        case 5: valor2_c1 = carta1.densidade; valor2_c2 = carta2.densidade; break;
        default: printf("Atributo invalido!\n"); return 0;
    }

    // -------- Mostrar os atributos comparados --------
    printf("\nComparacao dos atributos escolhidos:\n");
    printf("%s - Atributo 1: %.2f | Atributo 2: %.2f\n", carta1.nome, valor1_c1, valor2_c1);
    printf("%s - Atributo 1: %.2f | Atributo 2: %.2f\n", carta2.nome, valor1_c2, valor2_c2);

    // -------- Calcular a soma --------
    // regra: todos os atributos vencem com maior valor, exceto densidade (vence menor valor)
    soma_c1 = ((atributo1 == 5) ? -valor1_c1 : valor1_c1) + ((atributo2 == 5) ? -valor2_c1 : valor2_c1);
    soma_c2 = ((atributo1 == 5) ? -valor1_c2 : valor1_c2) + ((atributo2 == 5) ? -valor2_c2 : valor2_c2);

    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f\n", carta1.nome, soma_c1);
    printf("%s = %.2f\n", carta2.nome, soma_c2);

    // -------- Resultado final --------
    if (soma_c1 > soma_c2) {
        printf("\n*** %s venceu a rodada! ***\n", carta1.nome);
    } else if (soma_c2 > soma_c1) {
        printf("\n*** %s venceu a rodada! ***\n", carta2.nome);
    } else {
        printf("\n*** Empate! ***\n");
    }

    return 0;
}