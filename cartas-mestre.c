/*
 * Desafio Super Trunfo – Nível Mestre
 * Cadastro, cálculo, comparação e exibição de DUAS cartas de cidades
 *
 * Compilar:  gcc cartas-mestre.c -o cartas-mestre
 * Executar : ./cartas-mestre
 */

#include <stdio.h>

typedef struct {
    char  estado[3];
    char  codigo[4];
    char  nome[50];
    unsigned long int populacao; // Alterado para unsigned long int
    float area;
    float pib;
    int   pontos;
    float densidade;
    float pibPerCapita;
    float superPoder; // Novo campo para Super Poder
} Carta;

int main(void)
{
    /* --- Declaração das duas cartas --- */
    Carta c1, c2;

    /* ========== Cadastro da Carta 1 ========== */
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (A‑H): ");
    scanf(" %2s", c1.estado);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %3s", c1.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", c1.nome);

    printf("Digite a População: ");
    scanf(" %lu", &c1.populacao); // Alterado para %lu

    printf("Digite a Área (km²): ");
    scanf(" %f", &c1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &c1.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &c1.pontos);

    printf("\n");

    /* ========== Cadastro da Carta 2 ========== */
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (A‑H): ");
    scanf(" %2s", c2.estado);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf(" %3s", c2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", c2.nome);

    printf("Digite a População: ");
    scanf(" %lu", &c2.populacao); // Alterado para %lu

    printf("Digite a Área (km²): ");
    scanf(" %f", &c2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &c2.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &c2.pontos);


    /* ========== Cálculos ========== */

    // --- Carta 1 ---
    // Densidade Populacional (hab/km²)
    c1.densidade = (float)c1.populacao / c1.area;
    // PIB per Capita (R$)
    c1.pibPerCapita = (c1.pib * 1000000000) / c1.populacao;
    // Super Poder
    c1.superPoder = (float)c1.populacao + c1.area + (c1.pib * 1000000000) + (float)c1.pontos + c1.pibPerCapita + (1.0f / c1.densidade);


    // --- Carta 2 ---
     // Densidade Populacional (hab/km²)
    c2.densidade = (float)c2.populacao / c2.area;
    // PIB per Capita (R$)
    c2.pibPerCapita = (c2.pib * 1000000000) / c2.populacao;
    // Super Poder
    c2.superPoder = (float)c2.populacao + c2.area + (c2.pib * 1000000000) + (float)c2.pontos + c2.pibPerCapita + (1.0f / c2.densidade);


    /* ========== Exibição das cartas cadastradas (Opcional, mantido para referência) ========== */
    // Pode comentar ou remover esta seção se não for necessária para o nível Mestre
    printf("\n--- Cartas Cadastradas ---\n\n");
    printf("Carta 1:\n");
    printf("Estado: %s, Código: %s, Nome: %s\n", c1.estado, c1.codigo, c1.nome);
    printf("População: %lu, Área: %.2f, PIB: %.2f Bi, Pontos: %d\n", c1.populacao, c1.area, c1.pib, c1.pontos);
    printf("Densidade: %.2f hab/km², PIB per Capita: R$ %.2f, Super Poder: %.2f\n\n", c1.densidade, c1.pibPerCapita, c1.superPoder);

    printf("Carta 2:\n");
    printf("Estado: %s, Código: %s, Nome: %s\n", c2.estado, c2.codigo, c2.nome);
    printf("População: %lu, Área: %.2f, PIB: %.2f Bi, Pontos: %d\n", c2.populacao, c2.area, c2.pib, c2.pontos);
    printf("Densidade: %.2f hab/km², PIB per Capita: R$ %.2f, Super Poder: %.2f\n", c2.densidade, c2.pibPerCapita, c2.superPoder);


    /* ========== Comparação das Cartas ========== */
    printf("\n--- Comparação de Cartas ---\n");

    // Compara População (maior vence)
    int c1VencePopulacao = c1.populacao > c2.populacao;
    printf("População: Carta %d venceu (%d)\n", (c1VencePopulacao ? 1 : 2), c1VencePopulacao);

    // Compara Área (maior vence)
    int c1VenceArea = c1.area > c2.area;
    printf("Área: Carta %d venceu (%d)\n", (c1VenceArea ? 1 : 2), c1VenceArea);

    // Compara PIB (maior vence)
    int c1VencePib = c1.pib > c2.pib;
    printf("PIB: Carta %d venceu (%d)\n", (c1VencePib ? 1 : 2), c1VencePib);

    // Compara Pontos Turísticos (maior vence)
    int c1VencePontos = c1.pontos > c2.pontos;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (c1VencePontos ? 1 : 2), c1VencePontos);

    // Compara Densidade Populacional (MENOR vence)
    int c1VenceDensidade = c1.densidade < c2.densidade;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (c1VenceDensidade ? 1 : 2), c1VenceDensidade);

    // Compara PIB per Capita (maior vence)
    int c1VencePibPerCapita = c1.pibPerCapita > c2.pibPerCapita;
    printf("PIB per Capita: Carta %d venceu (%d)\n", (c1VencePibPerCapita ? 1 : 2), c1VencePibPerCapita);

    // Compara Super Poder (maior vence)
    int c1VenceSuperPoder = c1.superPoder > c2.superPoder;
    printf("Super Poder: Carta %d venceu (%d)\n", (c1VenceSuperPoder ? 1 : 2), c1VenceSuperPoder);


    return 0;
}