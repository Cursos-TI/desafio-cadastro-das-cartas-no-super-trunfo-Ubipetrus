#include <stdio.h>

int main(){
char carta1 [50];
char codigo1 [50];
char estado1  [50];
char cidade1 [50];
int populacao1;
float area1;
float pib1;

//carta 2 

char carta2 [50];
char codigo2 [50];
char estado2[50]; 
char cidade2[50]; 
int populacao2;
float area2;
float pib2;

//carta 1
printf("digite o nome da carta1: ");
scanf("%s", carta1);

printf("digite o codigo da carta 1:");
scanf("%s", codigo1);

printf("digite o nome do estado da carta1: ");
scanf("%s", estado1);

printf("digite o nome da cidade da carta 1:");
scanf("%s", cidade1);

printf("digite a população da carta 1:");
scanf("%d", &populacao1);

printf("digite area da carta 1: ");
scanf("%f", &area1);

printf("digite o pib da cidade 1: ");
scanf("%f", &pib1);

//n

// carta 2
printf("digite o nome da carta 2: ");
scanf("%s", carta2);

printf("digite o codigo da carta 2: ");
scanf("%s", codigo2);

printf("digite o nome do estado da carta 2:");
scanf("%s", estado2);

printf("digite o nome da cidade 2: ");
scanf("%s", cidade2);

printf("digite a população da carta 2:");
scanf("%d", &populacao2);

printf("digite a area da carta 2:");
scanf("%f", &area2);

printf("digite o pib da carta 2:");
scanf ("%f", &pib2);

// Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Carta: %s\n", carta1);
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);

    printf("\n=== Carta 2 ===\n");
    printf("Carta: %s\n", carta2);
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);

    return 0;