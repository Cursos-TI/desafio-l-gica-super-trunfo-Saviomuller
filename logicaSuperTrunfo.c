#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países Aluno: Sávio Muller - Matricula: 202407244432
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // Cadastro das variáveis da carta 1
    char estado1; // Armazena a letra a ser atribuída para o estado de A - H
    char carta1[3]; // Armazena o numero a ser atribuido a carta de 01 - 04 (limitado a 2 dígitos)
    char cidade1[60]; // Armazena o nome da cidade com no máximo 59 caracteres
    unsigned long int populacao1; // Armazena a população da cidade
    int turisticos1; // Armazena a quantidade de pontos turistícos da cidade
    float area1; // Armazena a aréa em km² da cidade
    float pib1; // Armazena o PIB da cidade
    float densidade1; // Armazena a Densidade Populacional
    float inversoDensidade1; // Armazena a Densidade Populacional invertida
    float percapta1; // Armazena o PIB per Capta
    float superPoder1; // Armazena super poder

    // Cadastro das variáveis da carta 2
    char estado2; // Armazena a letra a ser atribuída para o estado de A - H
    char carta2[3]; // Armazena o numero a ser atribuido a carta de 01 - 04 (limitado a 2 dígitos)
    char cidade2[60]; // Armazena o nome da cidade com no máximo 59 caracteres
    unsigned long int populacao2; // Armazena a população da cidade
    int turisticos2; // Armazena a quantidade de pontos turistícos da cidade
    float area2; // Armazena a aréa em km² da cidade
    float pib2; // Armazena o PIB da cidade
    float densidade2; // Armazena a Densidade Populacional
    float inversoDensidade2; // Armazena a Densidade Populacional invertida
    float percapta2; // Armazena o PIB per Capta
    float superPoder2; // Armazena super poder

    // Entrada de dados para a  carta 1
    printf("Defina os dados para a carta 1\n");

    printf("Digite uma letra de A á H para a sua carta:\n");
    scanf(" %c", &estado1); // Espaço para evitar erro de buffer

    printf("Digite um numero de 01 a 04 para carta:\n");
    scanf("%2s", carta1); // "2s"  Limita a 2 caracteres

    getchar(); // Limpa buffer antes de fgets
    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin); // "fgets" lê toda a linha digitável e armazena na string
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove a quebra de linha

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em Km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos1);

    printf("\n---------------------------------------\n");

    // Entrada de dados para carta 2
    printf("\nDefina os dados para a carta 2\n");

    printf("Digite uma letra de A á H para a sua carta:\n");
    scanf(" %c", &estado2);

    printf("Digite um numero de 01 a 04 para carta:\n");
    scanf("%2s", carta2); //"2s" Limita a 2 caracteres


    getchar(); // Limpa buffer antes de fgets
    printf("Digite o nome da cidade:\n"); // "fgets" lê toda a linha digitável e armazena na string
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove a quebra de linha

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em Km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos2);

    // Cálculos da densidade Populacional
    densidade1 = (float) populacao1 / area1; // Cálculo para a carta 1
    densidade2 = (float) populacao2 / area2; // Cálculo para a carta 2
    inversoDensidade1 = 1 / densidade1; // Cálculo da densidade invertida carta 1
    inversoDensidade2 = 1 / densidade2; // Cálculo da densidade invertida carta 2

    // Cálculo do PIB per Capta
    percapta1 = (float) (pib1 * 1000000000 ) / populacao1; // Cáculo do PIB per capta da carta 1, multilplicado para tranformar o PIB em Bilhões
    percapta2 = (float) (pib2 * 1000000000 ) / populacao2; // Cáculo do PIB per capta da carta 2, multilplicado para tranformar o PIB em Bilhões

    // Cálculo do Supe Poder
    superPoder1 = (float) populacao1 + area1 + pib1 + percapta1 + inversoDensidade1 + turisticos1;
    superPoder2 = (float) populacao2 + area2 + pib2 + percapta2 + inversoDensidade2 + turisticos2;

    //Imprime os dados da Carta 1
    printf("\n----------Dados Carta 1-----------\n");
    printf("Carta: %s\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1); // "3f" Limita a impressão de apenas 3 casas após o ponto
    printf("PIB: %.2f bilhões de reais\n", pib1); // ".2f" Limita a impressão de apenas 2 casas após o ponto
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capta: %.2f reais\n", percapta1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    //Imprime os dados da Carta 2
    printf("\n----------Dados Carta 2-----------\n");
    printf("Carta: %s\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2); // ".3f" Limita a impressão de apenas 3 casas após o ponto
    printf("PIB: %.2f bilhões de reais\n", pib2); // ".2f" Limita a impressão de apenas 2 casas após o ponto
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capta: %.2f reais\n", percapta2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    // Comparação dos dados das cartas
    printf("\n---Resultado das Comparações---\n");
    
    // Comparação da População
    printf("\n***População***\n");
    printf("Carta 1 - %s: %d\nCarta 2 - %s: %d\n",cidade1, populacao1, cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Carta 1 Venceu\n");
    }
    else{
        printf("Carta 2 Venceu\n");
    }

    // Comparação da Área
    printf("\n***Área***\n");
    printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",cidade1, area1, cidade2, area2);
    if (area1 > area2) {
        printf("Carta 1 Venceu\n");
    }
    else{
        printf("Carta 2 Venceu\n");
    }

    // Comparação do PIB
    printf("\n***PIB***\n");
    printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",cidade1, pib1, cidade2, pib2);
    if (pib1 > pib2) {
        printf("Carta 1 Venceu\n");
    }
    else{
        printf("Carta 2 Venceu\n");
    }
    // Comparação dos pontos Turísticos
    printf("\n***Pontos Turísticos***\n");
    printf("Carta 1 - %s: %d\nCarta 2 - %s: %d\n",cidade1, turisticos1, cidade2, turisticos2);
    if (turisticos1 > turisticos2) {
        printf("Carta 1 Venceu\n");
    }
    else{
        printf("Carta 2 Venceu\n");
    }

    // Comparação da Densidade
    printf("\n***Densidade Populacional***\n");
    printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",cidade1, densidade1, cidade2, densidade2);
    if (densidade1 < densidade2) {
        printf("Carta 1 Venceu\n");
    }
    else{
        printf("Carta 2 Venceu\n");
    }

    // Comparação do PIBPERCAPTA
    printf("\n***PIB per CAPTA***\n");
    printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",cidade1, percapta1, cidade2, percapta2);
    if (percapta1 > percapta2) {
        printf("Carta 1 Venceu\n");
    }
    else{
        printf("Carta 2 Venceu\n");
    }

    // Comparação do Superpoder
    printf("\n***Superpoder***\n");
    printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",cidade1, superPoder1, cidade2, superPoder2);
    if (superPoder1 > superPoder2) {
        printf("Carta 1 Venceu\n");
    }
    else{
        printf("Carta 2 Venceu\n");
    }

    return 0;

}
