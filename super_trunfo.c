/*
===========================================================
Projeto: Super Trunfo - Nível Mestre
Descrição:
Comparação avançada com dois atributos escolhidos
dinamicamente pelo usuário.
===========================================================
*/

#include <stdio.h>

int main() {

    /* ============================
       CARTAS PRÉ-CADASTRADAS
    ============================ */

    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1.84;
    int pontos1 = 50;

    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 0.63;
    int pontos2 = 30;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;

    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    /* ============================
       MENU PRIMEIRO ATRIBUTO
    ============================ */

    printf("====== SUPER TRUNFO ======\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    /* ============================
       MENU SEGUNDO ATRIBUTO (DINÂMICO)
    ============================ */

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Erro: atributos iguais nao sao permitidos!\n");
        return 0;
    }

    /* ============================
       FUNÇÃO LÓGICA DO SWITCH
    ============================ */

    switch(atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    switch(atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    /* ============================
       AJUSTE PARA DENSIDADE
    ============================ */

    if (atributo1 == 5) {
        valor1_c1 = 1 / valor1_c1;
        valor1_c2 = 1 / valor1_c2;
    }

    if (atributo2 == 5) {
        valor2_c1 = 1 / valor2_c1;
        valor2_c2 = 1 / valor2_c2;
    }

    /* ============================
       SOMA DOS ATRIBUTOS
    ============================ */

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    /* ============================
       RESULTADO FINAL
    ============================ */

    printf("\n====== RESULTADO ======\n");
    printf("%s - Soma: %.2f\n", pais1, soma1);
    printf("%s - Soma: %.2f\n", pais2, soma2);

    printf("Vencedor: %s\n",
           (soma1 > soma2) ? pais1 :
           (soma2 > soma1) ? pais2 :
           "Empate!");

    return 0;
}
