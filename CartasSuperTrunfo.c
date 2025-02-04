#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int populacao, ponto;
    float area, PIB;
    char nome[50], pais[50], estado[50], codigo[3];

    printf("Insira o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha

    printf("Insira o país da cidade: ");
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = 0; // Remove o caractere de nova linha

    printf("Insira o estado da cidade: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0; // Remove o caractere de nova linha

    printf("Insira a população desta cidade: ");
    scanf("%d", &populacao);

    printf("Qual é o PIB da cidade? ");
    scanf("%f", &PIB);

    printf("Qual a área desta cidade? ");
    scanf("%f", &area);

    printf("Qual é a quantidade de pontos turísticos? ");
    scanf("%d", &ponto);

    printf("Insira o código da cidade (formato Letra de A a H e número de 1 a 8): ");
    scanf("%s", codigo);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da cidade cadastrada:\n");
    printf("Nome: %s\n", nome);
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("PIB: %.2f\n", PIB);
    printf("Área: %.2f\n", area);
    printf("Pontos turísticos: %d\n", ponto);
    printf("Código: %s\n", codigo);

    return 0;
}