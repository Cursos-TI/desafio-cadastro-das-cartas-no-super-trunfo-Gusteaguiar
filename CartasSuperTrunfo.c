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

    //Variáveis para a primeira carta
    char estado1;
    char codigo1[5];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Leitura dos dados da primeira carta
    printf("Digite o estado da primeira carta (Uma letra de A até H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade com 3 dígitos (ex:A01, B02, C03):\n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade (Não deve ter espaços):\n");
    scanf(" %s", nomecidade1);
    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosturisticos1);

    //Leitura dos dados da segunda carta
    printf("Digite o estado da segunda carta (Uma letra de A até H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade com 3 dígitos (ex:A01, B02, C03):\n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade (Não deve ter espaços):\n");
    scanf(" %s", &nomecidade2);
    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosturisticos2);

    //Exibição dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    //Exibição dos dados da segunda carta
    printf("Dados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    return 0;
}
