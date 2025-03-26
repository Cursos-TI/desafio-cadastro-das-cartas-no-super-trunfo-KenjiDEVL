#include <stdio.h>

int main() {

    char nome[30], nome2[30];
    char codigo[3], codigo2[3];
    int populacao, populacao2;
    float areaEmKm, PIB, DensidadePopulacional, PIBcapita;
    float areaEmKm2, PIB2, DensidadePopulacional2, PIBcapita2;
    float SuperPoder, SuperPoder2;

    printf("Entre com o Nome da Cidade!");
    scanf("%s", nome);

    printf("Entre com o Codigo da Cidade!");
    scanf("%s", codigo);

    printf("Entre com a Populacao da Cidade!");
    scanf("%d", &populacao);

    printf("Entre com a Area da Cidade em Km! \n");
    scanf("%f", &areaEmKm);

    printf("Entre com o PIB da Cidade! \n");
    scanf("%f", &PIB);

    printf("Entre com a Densidade Populacional da Cidade! \n");
    scanf("%f", &DensidadePopulacional);

    printf("Entre com o PIB per capita da Cidade! \n");
    scanf("%f", &PIBcapita);

    printf("Entre com o Nome da Cidade2!");
    scanf("%s", nome2);

    printf("Entre com o Codigo da Cidade2!");
    scanf("%s", codigo2);

    printf("Entre com a Populacao da Cidade2!");
    scanf("%d", &populacao2);

    printf("Entre com a Area da Cidade em Km2! \n");
    scanf("%f", &areaEmKm2);

    printf("Entre com o PIB da Cidade2! \n");
    scanf("%f", &PIB2);

    printf("Entre com a Densidade Populacional da Cidade2! \n");
    scanf("%f", &DensidadePopulacional2);

    printf("Entre com o PIB per capita da Cidade2! \n");
    scanf("%f", &PIBcapita2);

    SuperPoder = populacao + areaEmKm + PIB + DensidadePopulacional + PIBcapita;
    SuperPoder2 = populacao2 + areaEmKm2 + PIB2 + DensidadePopulacional2 + PIBcapita2;

    printf("\n*** Dados da Cidade 1 e 2 ***\n");
    printf("----------------------------\n");
    printf("Nome:                  %s\n", nome);
    printf("Nome2:                 %s\n", nome2);
    printf("Codigo:                %s\n", codigo);
    printf("Codigo2:               %s\n", codigo2);
    printf("Populacao:             %d\n", populacao);
    printf("Populacao2:            %d\n", populacao2);
    printf("Area em Km:            %.2f km²\n", areaEmKm);
    printf("Area em Km2:           %.2f km²\n", areaEmKm2);
    printf("PIB:                   %.2f\n", PIB);
    printf("PIB2:                  %.2f\n", PIB2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf("Densidade Populacional2: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per capita:        %.2f\n", PIBcapita);
    printf("PIB per capita2:       %.2f\n", PIBcapita2);

    printf("\n*** Deseja ver o Super Poder? Y/N ***\n");
    char resposta[4];
    scanf("%s", resposta);

    if (resposta[0] == 'Y' || resposta[0] == 'y') {
        printf("\n*** SUPER PODER ***\n");
        printf("Super Poder da Cidade 1: %.2f\n", SuperPoder);
        printf("Super Poder da Cidade 2: %.2f\n", SuperPoder2);
    } else {
        printf("\nVocê escolheu não ver o Super Poder.\n");
    }

    if (SuperPoder >= SuperPoder2) {
        printf("\n*** A Carta mais Forte é: %s ***\n", nome);
    } else {
        printf("\n*** A Carta mais Forte é: %s ***\n", nome2);
    }

    return 0;
}
