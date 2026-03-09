#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao, populacao2, pontosTuristicos, pontosTuristicos2;
    float area, area2, pib, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira a população da cidade 1: ");
    scanf("%d", &populacao);
    printf("\n");

    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &pontosTuristicos);
    printf("\n");

    printf("Insira o valor do PIB da carta 1: ");
    scanf("%f", &pib);
    printf("\n");

    printf("Inserir o tamanho em area da carta1: ");
    scanf("%f", &area);
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

    printf("Inserir o tamanho em area da carta2: ");
    scanf("%f", &area2);
    printf("\n");

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("--------------------\n\n");
    printf("Carta 1: \n");

    printf("População: %d\n", populacao);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos);
    printf("PIB: %.2f\n", pib);
    printf("Area: %.2f\n\n", populacao);

    printf("--------------------\n\n");

    printf("Carta 2: \n");

    printf("População: %d\n", populacao2);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos2);
    printf("PIB: %.2f\n", pib2);
    printf("Area: %.2f\n\n", populacao2);

    return 0;
}
