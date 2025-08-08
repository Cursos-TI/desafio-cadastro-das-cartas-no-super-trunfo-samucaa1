#include <stdio.h>

int main(){

    char estado1 [1];
    char codigo1 [4];
    char nome1 [30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;

    printf("Cartas Super Trunfo\n\n");
    printf("Carta 1:\n\n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);
    printf("Estado: %s\n", estado1);

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

    densidadepopulacional1 = (float) (populacao1 / area1);
    pibpercapita1 = (float) (pib1 * 1000000000.0 / populacao1);

    char estado2 [1];
    char codigo2 [4];
    char nome2 [30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;

    printf("Carta 2:\n\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Estado: %s\n", estado2);

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

    densidadepopulacional2 = (float) (populacao2 / area2);
    pibpercapita2 = (float) (pib2 * 1000000000.0 / populacao2);

    printf("Carta 01: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);


    printf("Carta 02: \n");
    printf("Estado: %s\n", estado2);
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