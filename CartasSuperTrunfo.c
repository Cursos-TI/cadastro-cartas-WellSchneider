#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================

    // Aqui declaramos as variáveis que irão armazenar os dados da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Mensagem inicial para orientar o usuário
    printf("=== Cadastro da Carta 1 ===\n");

    // Leitura do estado (apenas uma letra)
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // espaço antes do %c evita problemas com ENTER anterior

    // Leitura do código da carta (ex: A01)
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    // Leitura do nome da cidade
    // OBS: aqui usamos %s, então não aceita espaços (nível básico)
    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    // Leitura da população (número inteiro)
    printf("Populacao: ");
    scanf("%d", &populacao1);

    // Leitura da área (número decimal)
    printf("Area (km2): ");
    scanf("%f", &area1);

    // Leitura do PIB (número decimal)
    printf("PIB: ");
    scanf("%f", &pib1);

    // Leitura da quantidade de pontos turísticos
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // =========================
    // CARTA 2
    // =========================

    // Agora repetimos o processo para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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
    // EXIBIÇÃO DOS DADOS
    // =========================

    // Agora vamos mostrar todas as informações cadastradas
    printf("\n\n=== CARTAS CADASTRADAS ===\n");

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // %.2f mostra apenas 2 casas decimais
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    // Indica que o programa terminou corretamente
    return 0;
}