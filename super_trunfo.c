#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Daniel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char cidade[50];
    char codigoCarta[32];
    int populacao;
    float area;
    float pib;
    int qtdPtsTuristicos;
    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Cadastro das Cartas:
    printf("Digite a letra que representa o estado escolhido:\n");
    scanf("%c", &estado);//Aqui é definida uma letra para representar o estado escolhido
    printf("Digite o nome da cidade escolhida:\n");
    scanf("%s", cidade);//Aqui é definida a cidade
    printf("Digite código da sua carta:\n");
    scanf("%s", codigoCarta);//definindo o código da carta
    
    //Agora será preenchido os atributos da carta escolhida
    printf("Agora vamos preencher os atributos da carta.\nDigite o número de habitantes da cidade escolhida:\n");
    scanf("%d", &populacao);//quantidade de habitantes da cidade
    printf("Digite a área geográfica da cidade:\n");
    scanf("%f", &area); //área geográfica
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib );//pib
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &qtdPtsTuristicos);//quantidade de pontos turísticos
    
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição dos Dados das Cartas:
    printf("Estado: %s\nCidade: %s\nCodigo da carta: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nQuantidade de pontos turísticos: %d\n", &estado, &codigoCarta, &populacao, &area, &pib, &qtdPtsTuristicos);

    return 0;
}