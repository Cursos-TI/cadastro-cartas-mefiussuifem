#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   
    char estado1, estado2;
    char codigo1 [20], codigo2 [20];
    char cidade1 [50], cidade2 [50];
    int populacao1, ponto_turistico1, populacao2, ponto_turistico2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_capita1, pib_capita2;

  // Área para entrada de dados
   /*----------CARTA 1-----------*/

    printf("Dados da Carta 1 \n");
    printf("\n");

    printf("Digite o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o total da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &ponto_turistico1);

    /*-------------CARTA 2----------------*/
    printf("\n");
    printf("Dados da Carta 2 \n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o total da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &ponto_turistico2);

  // Área para exibição dos dados da cidade

  /*--------------------EXIBE CARTAS-----------------*/

printf("Abaixo as cartas digitadas:\n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %d habitantes \n", populacao1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: R$ %.2f bilhões de reais \n", pib1);
    printf("Numero de Pontos Turisticos: %d \n", ponto_turistico1);
    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    pib_capita1 = (float) pib1 / populacao1;
    printf("PIB per Capita: %.2f reais \n", pib_capita1);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: R$ %.2f bilhões de reais \n", pib2);
    printf("Numero de Pontos Turisticos: %d", ponto_turistico2);
    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    pib_capita2 = (float) pib2 / populacao2;
    printf("PIB per Capita: %.2f reais \n", pib_capita2);

return 0;
} 
