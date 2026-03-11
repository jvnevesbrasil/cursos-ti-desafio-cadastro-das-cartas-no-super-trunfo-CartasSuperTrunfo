#include <stdio.h>

int main() {
    // Valores hardcoded para facilitar os testes
    int populacao = 12325000, populacao2 = 6748000;
    int pontosTuristicos = 50, pontosTuristicos2 = 30;
    float area = 1521.11, area2 = 1200.25;
    float pib = 699.28, pib2 = 300.50;   
    char estado = 'A', estado2 = 'B';
    
    char codigo[4] = "A01", codigo2[4] = "B02";
    char nomeCidade[50] = "São Paulo", nomeCidade2[50] = "Rio de Janeiro";
    
    float densidadePopulacional, densidadePopulacional2;
    float pibPerCapita, pibPerCapita2;
    
    /* === ÁREA COMENTADA PARA NÃO PRECISAR DIGITAR ===
    
    // CIDADE 1
    printf("Insira o estado da carta 1 (A-H): ");
    scanf(" %c", &estado);
    printf("\n");

    printf("Insira o codigo da carta 1 (ex: A01): ");
    scanf("%s", codigo);
    printf("\n");

    printf("Insira o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nomeCidade); 
    printf("\n");

    printf("Insira a população da cidade 1: ");
    scanf("%d", &populacao);
    printf("\n");

    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &pontosTuristicos);
    printf("\n");

    printf("Insira o valor do PIB da carta 1: ");
    scanf("%f", &pib);
    printf("\n");

    printf("Inserir o tamanho em area da carta 1: ");
    scanf("%f", &area);
    printf("\n");

    // CIDADE 2
    printf("Insira o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2); 
    printf("\n");

    printf("Insira o codigo da carta 2 (ex: A01): ");
    scanf("%s", codigo2);
    printf("\n");

    printf("Insira o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("\n");

    printf("Insira a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    printf("Insira o valor do PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("\n");

    printf("Inserir o tamanho em area da carta 2: ");
    scanf("%f", &area2);
    printf("\n");
    
    ================================================= */

    // Calculos:
    // Multiplicando o PIB por 1 bilhão para o resultado sair em Reais corretos
    pibPerCapita = (pib * 1000000000.0) / populacao;
    densidadePopulacional = (float) populacao / area;
    
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    densidadePopulacional2 = (float) populacao2 / area2;

    // Exibição dos Dados das Cartas:
    printf("--------------------\n\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);      
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);      
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita);      

    printf("--------------------\n\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // Adicionei os printf que faltavam aqui na exibição 2:
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);      
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    return 0;
}