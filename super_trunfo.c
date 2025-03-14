#include <stdio.h>

// Desafio Super Trunfo - Países
// Daniel S. Santos
int main()
{
    
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[20], cidade1[20], codigo1[2];
    int populacao1, qtdPtsTuristicos1;
    float area1, pib1;

    char estado2[20], cidade2[20], codigo2[3];
    int populacao2, qtdPtsTuristicos2;
    float area2, pib2;

    // Cadastro das Cartas:
    
    // Leitura de dados da Carta 1 utilizando scanf
    printf("Olá! Bem vindo ao jogo Super Trunfo!\nVamos cadastrar as cartas e iniciar o jogo?\nDigite o Codigo da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Estado 1: \n");
    scanf("%s", estado1);

    printf("digite a cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite a População da cidade 1: \n");
    scanf("%i", &populacao1);
    
    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade 1:\n");
    scanf("%i", &qtdPtsTuristicos1);

    // Leitura de dados da carta 2 utilizando scanf
    printf("\nDigite o Codigo da carta 2: \n");
    scanf("%s", codigo2);
    

    printf("Digite o estado da carta 2: \n");
    scanf("%s", estado2);
    

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade2);
    
    printf("Digite a população da cidade 2: \n");
    scanf("%i", &populacao2);
    

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area2);
    

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da cidade 2:\n");
    scanf("%i", &qtdPtsTuristicos2);
    

    // Exibição dos Dados das Cartas:

    //Informações da primeira carta utilizando printf
    printf("Primeira Carta\nEstado: %s\nCódigo do estado: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %i\n", estado1, codigo1, cidade1, populacao1, area1, pib1, qtdPtsTuristicos1);
   
    printf("\n\n");

    //Informações da segunda carta utilizando printf
    printf("Segunda Carta\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %i\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, qtdPtsTuristicos2);
    return 0;
}