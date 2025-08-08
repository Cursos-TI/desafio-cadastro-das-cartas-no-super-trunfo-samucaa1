#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;

    printf("Cartas Super Trunfo\n\n");
    printf("Carta 1:\n\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado1);
    printf("Estado: %c\n", estado1);

    printf("Digite o código da carta: ");
    scanf(" %3s", codigo1);
    printf("Código: %s\n", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome1);
    printf("Nome: %s\n", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("População: %d\n", populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Área: %.2fkm²\n", area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("PIB: %.2f bilhões de reais\n", pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);
    printf("Pontos turísticos: %d\n\n", pontosturisticos1);

    // Densidade populacional - verificação de divisão por zero
    if (area1 != 0.0f) {
        densidadepopulacional1 = (float)populacao1 / area1;
    } else {
        densidadepopulacional1 = 0.0f;
        printf("Atenção: Área da cidade da Carta 1 é zero. Densidade definida como 0.\n");
    }

    // PIB per capita - verificação de divisão por zero
    if (populacao1 != 0) {
        pibpercapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    } else {
        pibpercapita1 = 0.0f;
        printf("Atenção: População da cidade da Carta 1 é zero. PIB per Capita definido como 0.\n");
    }

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;

    printf("Carta 2:\n\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
    printf("Estado: %c\n", estado2);

    printf("Digite o código da carta: ");
    scanf(" %3s", codigo2);
    printf("Código: %s\n", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome2);
    printf("Nome: %s\n", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("População: %d\n", populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Área: %.2fkm²\n", area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);
    printf("Pontos turísticos: %d\n\n", pontosturisticos2);

    // Densidade populacional - verificação de divisão por zero
    if (area2 != 0.0f) {
        densidadepopulacional2 = (float)populacao2 / area2;
    } else {
        densidadepopulacional2 = 0.0f;
        printf("Atenção: Área da cidade da Carta 2 é zero. Densidade definida como 0.\n");
    }

    // PIB per capita - verificação de divisão por zero
    if (populacao2 != 0) {
        pibpercapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    } else {
        pibpercapita2 = 0.0f;
        printf("Atenção: População da cidade da Carta 2 é zero. PIB per Capita definido como 0.\n");
    }

    // Exibição final
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);

    printf("Carta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);

    return 0;
}
