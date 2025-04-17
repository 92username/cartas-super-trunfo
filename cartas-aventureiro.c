#include <stdio.h>

typedef struct {
    char  estado[3];     
    char  codigo[4];     
    char  nome[50];      /* Nome da cidade            */
    int   populacao;     
    float area;          /* km²                       */
    float pib;           /* Bilhões de reais          */
    int   pontos;        /* Pontos turísticos         */
    float densidade;     /* hab/km²                   */
    float pibPerCapita;  /* R$ por habitante          */
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
    scanf(" %49[^\n]", c1.nome); // Lê até encontrar uma nova linha

    printf("Digite a População: ");
    scanf(" %d", &c1.populacao);

    printf("Digite a Área (km²): ");
    scanf(" %f", &c1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &c1.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &c1.pontos);

    printf("\n");   /* Linha em branco entre cadastros */

    /* ========== Cadastro da Carta 2 ========== */
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (A‑H): ");
    scanf(" %2s", c2.estado);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf(" %3s", c2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", c2.nome); // Lê até encontrar uma nova linha

    printf("Digite a População: ");
    scanf(" %d", &c2.populacao);

    printf("Digite a Área (km²): ");
    scanf(" %f", &c2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &c2.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &c2.pontos);


    /* ========== Cálculos ========== */

    // Carta 1
    // Calcula a densidade populacional (hab/km²)
    c1.densidade = (float)c1.populacao / c1.area;
    // Calcula o PIB per capita (R$), convertendo bilhões para unidades
    c1.pibPerCapita = (c1.pib * 1000000000) / c1.populacao;


    // Carta 2
    // Calcula a densidade populacional (hab/km²)
    c2.densidade = (float)c2.populacao / c2.area;
    // Calcula o PIB per capita (R$), convertendo bilhões para unidades
    c2.pibPerCapita = (c2.pib * 1000000000) / c2.populacao;


    /* ========== Exibição das cartas cadastradas ========== */
    printf("\n--- Cartas Cadastradas ---\n\n");

    /* Carta 1 */
    printf("Carta 1:\n");
    printf("Estado: %s\n", c1.estado);
    printf("Código: %s\n",  c1.codigo);
    printf("Nome da Cidade: %s\n", c1.nome);
    printf("População: %d\n", c1.populacao);
    printf("Área: %.2f km²\n", c1.area);
    printf("PIB: %.2f bilhões de reais\n", c1.pib);
    printf("Número de Pontos Turísticos: %d\n", c1.pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", c1.densidade);
    printf("PIB per Capita: %.2f reais\n\n", c1.pibPerCapita);

    /* Carta 2 */
    printf("Carta 2:\n");
    printf("Estado: %s\n", c2.estado);
    printf("Código: %s\n",  c2.codigo);
    printf("Nome da Cidade: %s\n", c2.nome);
    printf("População: %d\n", c2.populacao);
    printf("Área: %.2f km²\n", c2.area);
    printf("PIB: %.2f bilhões de reais\n", c2.pib);
    printf("Número de Pontos Turísticos: %d\n", c2.pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", c2.densidade);
    printf("PIB per Capita: %.2f reais\n", c2.pibPerCapita);

    return 0;
}