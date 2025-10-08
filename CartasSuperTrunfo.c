#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Variáveis da primeira carta
      int populacao_1, pontos_turisticos_1;
      float area_1, pib_1;
      char nome_estado_1 [30], codigo_carta_1 [6], nome_cidade_1 [30];

    //Variáveis da segunda carta
      int populacao_2, pontos_turisticos_2;
      float area_2, pib_2;
      char nome_estado_2 [30], codigo_carta_2 [6], nome_cidade_2 [30];

  // Área para entrada de dados

    //Entrada dos dados da primeira carta
      printf("Vamos cadastrar a primeira carta do Super Trunfo!\n");

      printf("Digite o código da carta (ex: A01, B03, ...):\n");
      scanf("%s", codigo_carta_1);

      printf("Digite o nome do estado:\n");
      scanf("%s", nome_estado_1);

      printf("Digite o nome da cidade:\n");
      scanf("%s", nome_cidade_1);

      printf("Digite a população da cidade:\n");
      scanf("%d", &populacao_1);

      printf("Digite a área da cidade em Km²:\n");
      scanf("%f", &area_1);

      printf("Digite o PIB da cidade:\n");
      scanf("%f", &pib_1);

      printf("Digite o número de pontos turísticos na cidade:\n");
      scanf("%d", &pontos_turisticos_1);
    //Fim da entrada dos dados da primeira carta

    printf("\n");

    printf("Muito bem! Agora vamos inserir os dados da segunda carta do Super Trunfo!\n");

    printf("\n");

    //Entrada dos dados da segunda carta
      printf("Digite o código da carta (ex: A01, B03, ...):\n");
      scanf("%s", codigo_carta_2);

      printf("Digite o nome do estado:\n");
      scanf("%s", nome_estado_2);

      printf("Digite o nome da cidade:\n");
      scanf("%s", nome_cidade_2);

      printf("Digite a população da cidade:\n");
      scanf("%d", &populacao_2);

      printf("Digite a área da cidade em Km²:\n");
      scanf("%f", &area_2);

      printf("Digite o PIB da cidade:\n");
      scanf("%f", &pib_2);

      printf("Digite o número de pontos turísticos na cidade:\n");
      scanf("%d", &pontos_turisticos_2);
    //Fim da entrada dos dados da segunda carta

  // Área para exibição dos dados da cidade
      printf("\n\nAqui estão os dados das cartas cadastradas:\n");

      printf("Carta 1:\n");
      printf("Estado: %s\n", nome_estado_1);
      printf("Código: %s\n", codigo_carta_1);
      printf("Cidade: %s\n", nome_cidade_1);
      printf("População: %d\n", populacao_1);
      printf("Área: %.2f Km²\n", area_1);
      printf("PIB: %.2f Bilhões de Reais\n", pib_1);
      printf("Pontos Turísticos: %d\n", pontos_turisticos_1);
      printf("Densidade Populacional: %.2f hab/km²\n", populacao_1/area_1);
      printf("PIB per capita: %.2f \n", pib_1 * 1000000000/populacao_1);

      printf("\n");

      printf("Carta 2:\n");  
      printf("Código: %s\n", codigo_carta_2);
      printf("Estado: %s\n", nome_estado_2);
      printf("Cidade: %s\n", nome_cidade_2);
      printf("População: %d\n", populacao_2);
      printf("Área: %.2f Km²\n", area_2);
      printf("PIB: %.2f Bilhões de Reais\n", pib_2);
      printf("Pontos Turísticos: %d\n", pontos_turisticos_2);
      printf("Densidade Populacional: %.2f hab/km²\n", populacao_2/area_2);
      printf("PIB per capita: %.2f \n", pib_2 * 1000000000/populacao_2);

//Fim da exibição dos dados das cartas


return 0;


} 