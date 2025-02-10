#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //turisticos = pontos turísticos
    //codigo = código da carta

    int populacao, turisticos;
    float pib, area;
    char estado, codigo [3], cidade [30];

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
