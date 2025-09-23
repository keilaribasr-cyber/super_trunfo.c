#include <stdio.h>

int main (){
         // -------- Declaração das variáveis da Carta 1 --------
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // -------- Declaração das variáveis da Carta 2 --------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ================== Entrada de dados da Carta 1 ==================
    printf("Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ================== Entrada de dados da Carta 2 ==================
    printf("\nCadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ================== Cálculos adicionais ==================
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // PIB está em bilhões
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ================== Resultados ==================
    printf("\n================= RESULTADOS =================\n");

    printf("Comparacao Populacao: %d\n", (populacao1 > populacao2) ? 1 : 0);
    printf("Comparacao Area: %d\n", (area1 > area2) ? 1 : 0);
    printf("Comparacao PIB: %d\n", (pib1 > pib2) ? 1 : 0);
    printf("Comparacao PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Comparacao Densidade Populacional: %d\n", (densidade1 < densidade2) ? 1 : 0); // vence o menor
    printf("Comparacao Pontos Turisticos: %d\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
    printf("Comparacao Super Poder: %d\n", (superPoder1 > superPoder2) ? 1 : 0);

    printf("\n================= VALORES CALCULADOS =================\n");
    printf("Carta 1 - Densidade: %.2f, PIB per Capita: %.2f, Super Poder: %.2f\n", densidade1, pibPerCapita1, superPoder1);
    printf("Carta 2 - Densidade: %.2f, PIB per Capita: %.2f, Super Poder: %.2f\n", densidade2, pibPerCapita2, superPoder2);

    return 0;
}
