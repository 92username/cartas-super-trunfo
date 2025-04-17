![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white) ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) ![Linux Terminal](https://img.shields.io/badge/-Terminal-000000?style=for-the-badge&logo=linux&logoColor=white)

# Super Trunfo de Cidades - Nível Novato

Este aplicativo em C permite cadastrar e exibir os dados de duas cartas do Super Trunfo de cidades, conforme o desafio proposto.

## O que o app faz
- Solicita ao usuário os dados de duas cidades (estado, código, nome, população, área, PIB e pontos turísticos).
- Exibe as informações cadastradas de forma organizada na tela.

## Como executar

Compile o programa e execute o aplicativo:

```bash
   gcc cartas-novato.c -o cartas-novato
   ./cartas-novato
   ```

Siga as instruções na tela para cadastrar as cartas.

# Nível Aventureiro

Este aplicativo faz o mesmo do nível novato, com a diferença que efetua os cálculos de Densidade Populacional, Densidade Demográfica e PIB per Capita de cada uma das 
cartas inseridas previamente pelo usuário.

## Como executar

Compile o programa e execute o aplicativo:

```bash
gcc cartas-aventureiro.c -o cartas-aventureiro
./cartas-aventureiro
```

# Nível Mestre

Este aplicativo faz o mesmo do nível Aventureiro, com a diferença que executa a
**Batalha das Cartas**.  Ao fim do cadastro das cartas, o programa exibe de forma
organizada o resultado. Exemplo:

```bash
--- Cartas Cadastradas ---

Carta 1:
Estado: rj, Código: a09, Nome: rio de janeiro
População: 6777433, Área: 5678.00, PIB: 33.00 Bi, Pontos: 98
Densidade: 1193.63 hab/km², PIB per Capita: R$ 4869.10, Super Poder: 33006786560.00

Carta 2:
Estado: sc, Código: b02, Nome: florianopolis
População: 4339888, Área: 4399.00, PIB: 29.00 Bi, Pontos: 78
Densidade: 986.56 hab/km², PIB per Capita: R$ 6682.20, Super Poder: 29004349440.00

--- Comparação de Cartas ---
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 2 venceu (0)
Super Poder: Carta 1 venceu (1)
```
