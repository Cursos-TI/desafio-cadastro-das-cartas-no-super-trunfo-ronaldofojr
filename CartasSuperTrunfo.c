#include <stdio.h>

int main() {
    // --- Carta 1 ---
    // Aqui são as variáveis da primeira carta
    char estado1;                  // letra do estado (tipo A, B, C...)
    char codigo1[4];               // código da carta, tipo "A01"
    char cidade1[50];             // nome da cidade
    int populacao1;               // quantas pessoas tem
    float area1;                  // tamanho da cidade em km²
    float pib1;                   // valor do PIB (dinheiro que a cidade produz)
    int pontosTuristicos1;        // lugares turísticos da cidade

    // Abaixo é o que a gente vai calcular depois pra carta 1
    float densidade1;             // população dividido pela área
    float pibPerCapita1;          // pib dividido pela população

    // --- Carta 2 ---
    // Mesma coisa da carta 1, só que pra segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Também vamos calcular pra carta 2
    float densidade2;
    float pibPerCapita2;

    // ===== CADASTRO DA CARTA 1 =====
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // tem espaço antes do %c pra evitar bug da quebra de linha

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // isso aqui serve pra ler o nome com espaço

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== CADASTRO DA CARTA 2 =====
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== CÁLCULOS =====
    // aqui a gente faz os cálculos dos novos atributos
    // pra carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // pra carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== EXIBIR CARTA 1 =====
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhões por pessoa\n", pibPerCapita1);

    // ===== EXIBIR CARTA 2 =====
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhões por pessoa\n", pibPerCapita2);

    return 0;
}
