#include <stdio.h>

int main() {

    char estado1 [15];
    char codigo1 [10];
    char nome1 [30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    printf("Cartas Super Trunfo\n\n");
    printf("Carta 1:\n\n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);
    printf("Estado: %s\n", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Código: %s\n", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Nome: %s\n", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("População: %d\n", populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Área: %fkm²\n", area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("PIB: %f bilhões de reais\n", pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);
    printf("Pontos turísticos: %d\n\n", pontosturisticos1);

    char estado2 [15];
    char codigo2 [10];
    char nome2 [30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Carta 2:\n\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Estado: %s\n", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Código: %s\n", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Nome: %s\n", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("População: %d\n", populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Área: %fkm²\n", area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("PIB: %f bilhões de reais\n", pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

}
