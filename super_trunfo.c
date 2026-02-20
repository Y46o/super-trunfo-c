/*
===========================================================
Projeto: Super Trunfo - Nível Mestre
Descrição:
Implementa comparação completa entre duas cartas,
incluindo cálculo de Super Poder.
===========================================================
*/

#include <stdio.h>
#include <string.h>

int main() {

    /* ==============================
       DECLARAÇÃO DAS VARIÁVEIS
    ============================== */

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    float densidade2, pibPerCapita2, superPoder2;

    /* ==============================
       ENTRADA DE DADOS – CARTA 1
    ============================== */

    printf("=== Cadastro da Carta 1 ===\n");

    scanf(" %c", &estado1);
    scanf("%s", codigo1);
    getchar();
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);

    /* ==============================
       CÁLCULOS – CARTA 1
    ============================== */

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1.0 / densidade1);

    /* ==============================
       ENTRADA DE DADOS – CARTA 2
    ============================== */

    printf("=== Cadastro da Carta 2 ===\n");

    scanf(" %c", &estado2);
    scanf("%s", codigo2);
    getchar();
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);

    /* ==============================
       CÁLCULOS – CARTA 2
    ============================== */

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1.0 / densidade2);

    /* ==============================
       COMPARAÇÃO DAS CARTAS
    ============================== */

    printf("\n==== Comparacao de Cartas ====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // Regra invertida para densidade
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
