/*
===========================================================
Projeto: Super Trunfo - Lógica do Jogo
Nível: Novato
Descrição:
Comparação de duas cartas utilizando um único atributo,
com uso de estruturas if e if-else.
===========================================================
*/

#include <stdio.h>
#include <string.h>

int main() {

    /* ============================
       DECLARAÇÃO DAS VARIÁVEIS
    ============================ */

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];

    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    /* ============================
       ENTRADA DE DADOS - CARTA 1
    ============================ */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar(); // Limpa buffer

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    /* ============================
       ENTRADA DE DADOS - CARTA 2
    ============================ */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    getchar();

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    /* ============================
       CÁLCULOS
    ============================ */

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    /* ============================
       ESCOLHA DO ATRIBUTO
    ============================ */

    int atributoEscolhido = 1;  // 1=População | 2=Área | 3=PIB | 4=Densidade | 5=PIB per capita

    printf("\n=== Comparacao de Cartas ===\n");

    if (atributoEscolhido == 1) {

        printf("Atributo: Populacao\n");
        printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    else if (atributoEscolhido == 2) {

        printf("Atributo: Area\n");

        if (area1 > area2)
            printf("Resultado: Carta 1 venceu!\n");
        else
            printf("Resultado: Carta 2 venceu!\n");
    }

    else if (atributoEscolhido == 3) {

        printf("Atributo: PIB\n");

        if (pib1 > pib2)
            printf("Resultado: Carta 1 venceu!\n");
        else
            printf("Resultado: Carta 2 venceu!\n");
    }

    else if (atributoEscolhido == 4) {

        printf("Atributo: Densidade Populacional\n");

        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 venceu!\n");
        else
            printf("Resultado: Carta 2 venceu!\n");
    }

    else if (atributoEscolhido == 5) {

        printf("Atributo: PIB per Capita\n");

        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 venceu!\n");
        else
            printf("Resultado: Carta 2 venceu!\n");
    }

    return 0;
}
