#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

// ============================================================================================================================

    // DECLARACAO DOS TIPOS DE DADOS PARA O CARD 1 E 2
    char pais1[30], cidade1[30], codigo1[3];
    float area1, pib1;
    int populacao1, ponts_turist1;

    char pais2[30], cidade2[30], codigo2[2];
    float area2, pib2;
    int populacao2, ponts_turist2;
    
    printf("=================================================\n");
    printf("Bem vindo ao Cadastro de cartas\n");
    printf("\n");


    // LEITURA DOS DADOS DO PRIMEIRO CARD
    printf("Nome da Cidade1: ");
    scanf(" %s", cidade1);

    printf("Nome do Pais da Cidade1: ");
    scanf(" %s", &pais1);

    printf("Estado - UF: ");
    scanf(" %s", codigo1);

    printf("Populacao da Cidade1: ");
    scanf(" %d", &populacao1);

    printf("Area da Cidade1: ");
    scanf(" %f", &area1);

    printf("PIB da Cidade1: ");
    scanf(" %f", &pib1);

    printf("Pontuacao Turistica: ");
    scanf(" %d", &ponts_turist1);


    printf("=================================================\n");
    printf("CIDADE1: %s \n", cidade1);
    printf("PAIS DA CIDADE1: %s \n", pais1);
    printf("UF1: %s \n", codigo1);
    printf("POLULACAO1: %d milhoes \n", populacao1);
    printf("AREA1: %.1f km2 \n", area1);
    printf("PIB1: %f milhoes \n", pib1);
    printf("TURISMO: %d pontos \n", ponts_turist1);
    printf("=================================================\n");

    return 0;
}
