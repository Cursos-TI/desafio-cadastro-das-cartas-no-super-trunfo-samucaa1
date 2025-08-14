#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    printf("Cartas Super Trunfo\n\n");
    printf("Carta 1:\n\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Densidade populacional
    if (area1 != 0.0f)
        densidadepopulacional1 = (float) populacao1 / area1;
    else {
        densidadepopulacional1 = 0.0f;
        printf("Atenção: Área da cidade da Carta 1 é zero. Densidade definida como 0.\n");
    }

    // PIB per capita
    if (populacao1 != 0)
        pibpercapita1 = (pib1 * 1000000000.0f) / (float) populacao1;
    else {
        pibpercapita1 = 0.0f;
        printf("Atenção: População da cidade da Carta 1 é zero. PIB per Capita definido como 0.\n");
    }

    // Cálculo do Super Poder (com inverso da densidade)
    float inverso_densidade1 = (densidadepopulacional1 != 0.0f) ? (1.0f / densidadepopulacional1) : 0.0f;
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibpercapita1 + inverso_densidade1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    printf("\nCarta 2:\n\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Densidade populacional
    if (area2 != 0.0f)
    densidadepopulacional2 = (float) populacao2 / area2;
    else {densidadepopulacional2 = 0.0f;
    printf("Atenção: Área da cidade da Carta 2 é zero. Densidade definida como 0.\n");}

    // PIB per capita
    if (populacao2 != 0)
    pibpercapita2 = (pib2 * 1000000000.0f) / (float) populacao2;
    else {pibpercapita2 = 0.0f;
    printf("Atenção: População da cidade da Carta 2 é zero. PIB per Capita definido como 0.\n");}

    // Cálculo do Super Poder (com inverso da densidade)
    float inverso_densidade2 = (densidadepopulacional2 != 0.0f) ? (1.0f / densidadepopulacional2) : 0.0f;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibpercapita2 + inverso_densidade2;

    // Exibição final
    printf("\n--- Carta 01 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n--- Carta 02 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    printf("\n--- Comparações ---\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional (menor vence): %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    return 0;
}
