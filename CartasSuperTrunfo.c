#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================

    // Declaração das variáveis da carta 1
    char estado1 = 0;
    char codigo1[4] = {0};
    char cidade1[50] = {0};
    int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int pontosTuristicos1 = 0;

    // Variáveis adicionais (nível aventureiro)
    float densidade1 = 0;
    float pibPerCapita1 = 0;

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =========================
    // CÁLCULOS CARTA 1
    // =========================

    // Calcula a densidade populacional (habitantes por km²)
    densidade1 = populacao1 / area1;

    // Calcula o PIB per capita
    pibPerCapita1 = pib1 / populacao1;


    // =========================
    // CARTA 2
    // =========================

    char estado2 = 0;
    char codigo2[4] = {0};
    char cidade2[50] = {0};
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosTuristicos2 = 0;

    // Variáveis adicionais
    float densidade2 = 0;
    float pibPerCapita2 = 0;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // CÁLCULOS CARTA 2
    // =========================

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;


    // =========================
    // EXIBIÇÃO DOS DADOS
    // =========================

    printf("\n\n=== CARTAS CADASTRADAS ===\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Novos dados calculados
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    // Novos dados calculados
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}