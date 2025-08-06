#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


#include<stdio.h>

int main() {
    // Dados da Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    float populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidade1;
    float ppc1; //pib per capita
 

    // Dados da Carta 2
    char estado2,codigo2[4],nomeCidade2[50];
    float populacao2;
    int pontosturisticos2;
    float area2,pib2;
    float densidade2;
    float ppc2; //pib per capita


    // Leitura da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%f", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura da Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%f", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Impressão da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    densidade1 = populacao1/area1;
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    ppc1 = (pib1*100000000)/populacao1;
    printf("PIB per capita: %.2f reais \n", ppc1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Impressão da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    densidade2 = populacao2/area2;
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    ppc2 = (pib2*100000000)/populacao2;
    printf("PIB per capita: %.2f reais \n", ppc2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
