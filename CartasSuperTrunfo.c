#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países

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

    //Variáveis de comparação
    int resultado_populacao, resultado_pontos, resultado_area, resultado_pib, 
        resultado_densidade, resultado_pibpercapita, resultado_SuperPoder;

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

  //Variáveis derivadas da primeira carta
    float densidade_pop_1 = populacao_1/area_1; 
    float pib_per_capita_1 = (pib_1*1000000000)/populacao_1;
    float inverso_densidade_1 = area_1/populacao_1;
    float SuperPoder_1 =                                        // Aqui vai ser necessário trazer todas as grandezas para uma grandeza compatível
                            (populacao_1 / 1000000.0) +         // dividido pela grande de milhões
                            (area_1 / 1000.0) +                 // dividido pela milhar
                            (pib_1) +                           // PIB já em grandeza resumida
                            (pontos_turisticos_1) +             // número simples
                            (pib_per_capita_1 / 10000.0) +      // dividido pela dezena de milhar
                            (inverso_densidade_1 * 1000);       // amplificado o inverso da densidade
  //Variáveis derivadas da primeira carta
    float densidade_pop_2 = populacao_2 / area_2; 
    float pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;
    float inverso_densidade_2 = area_2/populacao_2;
    float SuperPoder_2 =                                        // Aqui vai ser necessário trazer todas as grandezas para uma grandeza compatível
                            (populacao_2 / 1000000.0) +         // dividido pela grande de milhões
                            (area_2 / 1000.0) +                 // dividido pela milhar
                            (pib_2) +                           // PIB já em grandeza resumida
                            (pontos_turisticos_2) +             // número simples
                            (pib_per_capita_1 / 10000.0) +      // dividido pela dezena de milhar
                            (inverso_densidade_1 * 1000);       // amplificado o inverso da densidade


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
      printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_1);
      printf("PIB per capita: %.2f\n", pib_per_capita_1);
      printf("Super Poder: %.2f\n", SuperPoder_1); 

      printf("\n");

      printf("Carta 2:\n");  
      printf("Código: %s\n", codigo_carta_2);
      printf("Estado: %s\n", nome_estado_2);
      printf("Cidade: %s\n", nome_cidade_2);
      printf("População: %d\n", populacao_2);
      printf("Área: %.2f Km²\n", area_2);
      printf("PIB: %.2f Bilhões de Reais\n", pib_2);
      printf("Pontos Turísticos: %d\n", pontos_turisticos_2);
      printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_2);
      printf("PIB per capita: %.2f\n", pib_per_capita_2);
      printf("Super Poder: %.2f\n", SuperPoder_2); 

//Fim da exibição dos dados das cartas

printf("\n");  

//Início das comparações
   int escolhaCarta;

    printf("Escolha a opção de atributo que gostaria de comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");    
    printf("\n");  
    printf("Digite a sua escolha:\n");
    scanf("%d", &escolhaCarta);

    printf("\n");  

    switch(escolhaCarta)
    {
        case 1:
            printf("- Comparação do atributo População:\n");
            if (populacao_1 > populacao_2) {
                printf("%s possui população de %d pessoas - %s possui populção de %d pessoas!\nPor isso, a carta 1 (%s) venceu!", nome_cidade_1, populacao_1, nome_cidade_2, populacao_2,nome_cidade_1);
            } else if (populacao_1 < populacao_2) {
                printf("%s possui população de %d pessoas - %s possui populção de %d pessoas!\nPor isso, a carta 2 (%s) venceu!", nome_cidade_2, populacao_2, nome_cidade_1, populacao_1,nome_cidade_2);
            } else if (populacao_1 == populacao_2) {
                printf("Empate!!!\n");
            }
        break;

        case 2:
            printf("- Comparação do atributo Área:\n");
            if (area_1 > area_2) {
                printf("%s possui área de %.2f Km² - %s possui área de %.2f Km²!\nPor isso, a carta 1 (%s) venceu!", nome_cidade_1, area_1, nome_cidade_2, area_2, nome_cidade_1);
            } else if (area_1 < area_2) {
                printf("%s possui área de %.2f Km² - %s possui área de %.2f Km²!\nPor isso, a carta 2 (%s) venceu!", nome_cidade_2, area_2, nome_cidade_1, area_1, nome_cidade_2);
            } else if (area_1 == area_1) {
                printf("Empate!!!\n");
            }
        break;

        case 3:
            printf("- Comparação do atributo PIB:\n");
            if (pib_1 > pib_2) {
                printf("%s possui um PIB de R$ %.2f Bilhões de reais - %s possui PIB de R$ %.2f Bilhões de reais!\nPor isso, a carta 1 (%s) venceu!", nome_cidade_1, pib_1, nome_cidade_2, pib_2, nome_cidade_1);
            } else if (pib_1 < pib_2) {
                printf("%s possui um PIB de R$ %.2f Bilhões de reais - %s possui PIB de R$ %.2f Bilhões de reais!\nPor isso, a carta 2 (%s) venceu!", nome_cidade_2, pib_2, nome_cidade_1, pib_1, nome_cidade_2);
            } else if (pib_1 == pib_2) {
                printf("Empate!!!\n");
            }
        break;

        case 4:
            printf("- Comparação do atributo Número de Pontos Turísticos:\n");
            if (pontos_turisticos_1 > pontos_turisticos_2) {
                printf("%s possui %d pontos turísticos - %s possui %d pontos turísticos!\nPor isso, a carta 1 (%s) venceu!", nome_cidade_1, pontos_turisticos_1, nome_cidade_2, pontos_turisticos_2, nome_cidade_1);
            } else if (pontos_turisticos_1 < pontos_turisticos_2) {
                printf("%s possui %d pontos turísticos - %s possui %d pontos turísticos!\nPor isso, a carta 2 (%s) venceu!", nome_cidade_2, pontos_turisticos_2, nome_cidade_1, pontos_turisticos_2, nome_cidade_2);
            } else if (pontos_turisticos_1 == pontos_turisticos_2) {
                printf("Empate!!!\n");
            }
        break;

        case 5:
            printf("- Comparação do atributo Densidade Populacional:\n");
            if (densidade_pop_1 > densidade_pop_2) {
                printf("%s possui densidade populacional de %.2f hab/km² - %s possui densidade populacional de %.2f hab/km²!\nPor isso, a carta 1 (%s) venceu!", nome_cidade_1, densidade_pop_1, nome_cidade_2, densidade_pop_2, nome_cidade_1);
            } else if (densidade_pop_1 < densidade_pop_2) {
                printf("%s possui densidade populacional de %.2f hab/km² - %s possui densidade populacional de %.2f hab/km²!\nPor isso, a carta 2 (%s) venceu!", nome_cidade_2, densidade_pop_2, nome_cidade_1, densidade_pop_1, nome_cidade_2);
            } else if (densidade_pop_1 == densidade_pop_2) {
                printf("Empate!!!\n");
            }
        break;

        case 6:
            printf("- Comparação do atributo PIB per capita:\n");
            if (pib_per_capita_1 > pib_per_capita_2) {
                printf("%s possui PIB per capita de R$ %.2f - %s possui PIB per capita de R$ %.2f!\nPor isso, a carta 2 (%s) venceu!", nome_cidade_1, pib_per_capita_1, nome_cidade_2, pib_per_capita_2, nome_cidade_2);
            } else if (pib_per_capita_1 < pib_per_capita_2) {
                printf("%s possui PIB per capita de R$ %.2f - %s possui PIB per capita de R$ %.2f!\nPor isso, a carta 1 (%s) venceu!", nome_cidade_2, pib_per_capita_2, nome_cidade_1, pib_per_capita_1, nome_cidade_1);
            } else if (pib_per_capita_1 == pib_per_capita_2) {
                printf("Empate!!!\n");
            }
        break;

        case 7:
            printf("- Comparação do atributo Super Poder:\n");
            if (SuperPoder_1 > SuperPoder_2) {
                printf("O Super Poder de %s é equivalente à %.2f - O Super Poder de %s é equivalente à %.2f!\nPor isso, a carta 1 (%s) venceu!", nome_cidade_1, SuperPoder_1, nome_cidade_2, SuperPoder_2, nome_cidade_1);
            } else if (SuperPoder_1 < SuperPoder_2) {
                printf("O Super Poder de %s é equivalente à %.2f - O Super Poder de %s é equivalente à %.2f!\nPor isso, a carta 2 (%s) venceu!", nome_cidade_2, SuperPoder_2, nome_cidade_1, SuperPoder_1, nome_cidade_2);
            } else if (SuperPoder_1 == SuperPoder_2) {
                printf("Empate!!!\n");
            }
        break;

        default:
        printf("Opcao invalida!\n");
        break;
    }

printf("\n\n");

//Fim das comparações
    return 0;

} 