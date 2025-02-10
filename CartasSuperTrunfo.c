#include <stdio.h>

    //turisticos = pontos turísticos
    //codigo = código da carta

int main() {
   

    int populacao, turisticos;
    float pib, area;
    char estado, codigo [30], cidade [30];

    printf("Digite o código do estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população da cidade: \n");
    scanf("%i", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turisticos);

    printf("Estado: %c \n", estado);
    printf("Código carta: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", turisticos);


    return 0;
}