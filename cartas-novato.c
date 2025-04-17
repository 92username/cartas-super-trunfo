/*
 * Desafio Super Trunfo – Nível Novato
 * Cadastro e exibição de DUAS cartas de cidades
 *
 * Compilar:  gcc cartas.c -o cartas
 * Executar : ./cartas
 */

 #include <stdio.h>

 typedef struct {
     char  estado[3];     /* RJ + '\0'                 */
     char  codigo[4];     /* A01 + '\0'                */
     char  nome[50];      /* Nome da cidade            */
     int   populacao;     /* Habitantes                */
     float area;          /* km²                       */
     float pib;           /* Bilhões de reais          */
     int   pontos;        /* Pontos turísticos         */
 } Carta;
 
 int main(void)
 {
     /* --- Declaração das duas cartas --- */
     Carta c1, c2;
 
     /* ========== Cadastro da Carta 1 ========== */
     printf("--- Cadastro da Carta 1 ---\n");
 
     printf("Digite o Estado (A‑H): ");
     scanf(" %2s", c1.estado);
 
     printf("Digite o Código da Carta (ex: A01): ");
     scanf(" %3s", c1.codigo);
 
     printf("Digite o Nome da Cidade: ");
     scanf(" %49[^\n]", c1.nome);
 
     printf("Digite a População: ");
     scanf(" %d", &c1.populacao);
 
     printf("Digite a Área (km²): ");
     scanf(" %f", &c1.area);
 
     printf("Digite o PIB (em bilhões de reais): ");
     scanf(" %f", &c1.pib);
 
     printf("Digite o Número de Pontos Turísticos: ");
     scanf(" %d", &c1.pontos);
 
     printf("\n");   /* Linha em branco entre cadastros */
 
     /* ========== Cadastro da Carta 2 ========== */
     printf("--- Cadastro da Carta 2 ---\n");
 
     printf("Digite o Estado (A‑H): ");
     scanf(" %2s", c2.estado);
 
     printf("Digite o Código da Carta (ex: B02): ");
     scanf(" %3s", c2.codigo);
 
     printf("Digite o Nome da Cidade: ");
     scanf(" %49[^\n]", c2.nome);
 
     printf("Digite a População: ");
     scanf(" %d", &c2.populacao);
 
     printf("Digite a Área (km²): ");
     scanf(" %f", &c2.area);
 
     printf("Digite o PIB (em bilhões de reais): ");
     scanf(" %f", &c2.pib);
 
     printf("Digite o Número de Pontos Turísticos: ");
     scanf(" %d", &c2.pontos);
 
 
     /* ========== Exibição das cartas cadastradas ========== */
     printf("\n--- Cartas Cadastradas ---\n\n");
 
     /* Carta 1 */
     printf("Carta 1:\n");
     printf("Estado: %s\n", c1.estado);
     printf("Código: %s\n",  c1.codigo);
     printf("Nome da Cidade: %s\n", c1.nome);
     printf("População: %d\n", c1.populacao);
     printf("Área: %.2f km²\n", c1.area);
     printf("PIB: %.2f bilhões de reais\n", c1.pib);
     printf("Número de Pontos Turísticos: %d\n\n", c1.pontos);
 
     /* Carta 2 */
     printf("Carta 2:\n");
     printf("Estado: %s\n", c2.estado);
     printf("Código: %s\n",  c2.codigo);
     printf("Nome da Cidade: %s\n", c2.nome);
     printf("População: %d\n", c2.populacao);
     printf("Área: %.2f km²\n", c2.area);
     printf("PIB: %.2f bilhões de reais\n", c2.pib);
     printf("Número de Pontos Turísticos: %d\n", c2.pontos);
 
     return 0;
 }
 