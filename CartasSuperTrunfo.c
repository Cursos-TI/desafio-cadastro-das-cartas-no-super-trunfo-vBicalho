#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    // Dados da Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidade1;//densidade populacional
    float ppc1; //pib per capita
    float superPoder1;
 

    // Dados da Carta 2
    char estado2,codigo2[4],nomeCidade2[50];
    int populacao2;
    int pontosturisticos2;
    float area2,pib2;
    float densidade2;//densidade populacional
    float ppc2; //pib per capita
    float superPoder2;


    // Leitura da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    //densidade/PIB per capita/ super poder
    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;
    ppc1 = (pib1*1e9)/populacao1;
    ppc2 = (pib2*1e9)/populacao2;
    superPoder1 = populacao1+area1+pib1+pontosTuristicos1+ppc1+(1/densidade1);
    superPoder2 = populacao2+area2+pib2+pontosturisticos2+ppc2+(1/densidade2);
    
    
    
    // Impressão da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.d\n", populacao1);
    printf("Área: %.2f km²\n", area1);  
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB: %.2f bilhões de reais\n", pib1); 
    printf("PIB per capita: %.2f reais \n", ppc1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Super poder: %.2f pontos\n", superPoder1);

    // Impressão da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %.d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("PIB per capita: %.2f reais \n", ppc2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Super poder: %.2f pontos\n", superPoder2);


    // Comparação das cartas
    printf("\nPopulação: Carta 1 venceu : %d \n",(populacao1>populacao2));
    printf("Área: Carta 1 venceu : %d \n",(area1>area2));
    printf("PIB: Carta 1 venceu : %d \n",(pib1>pib2));
    printf("Pontos turísticos: Carta 1 venceu : %d \n",(pontosTuristicos1>pontosturisticos2));
    printf("Densidade Populacional: Carta 2 venceu : %d \n",(densidade2<densidade1));
    printf("Densidade Populacional: Carta 1 venceu : %d \n",(densidade1>densidade2));
    printf("Super Poder: Carta 1 venceu : %d \n",(superPoder1>superPoder2));



    return 0;
}