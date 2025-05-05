#include <stdio.h>

int main(){
    
    char estado1, estado2, nome1[20], nome2[20], codigo1[20], codigo2[20];
    int populacao1, populacao2, pt1, pt2;
    float area1, area2, pib1, pib2;

    printf("Bem Vindo ao Super Trunfo, Por Favor digite as Informações Da Primeira Carta \n");
    printf("Digite a Primeira Letra Do Estado Escolhido: \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo Para Seu Estado, sendo A letra seguido de um numero de 01 a 04  \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome1);

    printf("Digite a População da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB Da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a Quantida de pontos turistico: \n");
    scanf("%d", &pt1);

    printf("Agora Digite as informações da Segunda Carta: \n");
    printf("Digite a Primeira Letra Do Estado Escolhido: \n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo Para Seu Estado, sendo A letra seguido de um numero de 01 a 04  \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB Da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantida de pontos turisticos: \n");
    scanf("%d", &pt2);


    printf("Aqui estão as informações das Cartas registradas: \n");
    printf("CARTA 1: \n Estado: %c \n Codigo: %s \n Nome Da Cidade: %s \n População: %d \n Área em KM²: %f \n PIB: %f \n Quantidade De Pontos Turisticos: %d\n\n", estado1, codigo1, nome1, populacao1, area1, pib1, pt1);

    printf("CARTA 2: \n Estado: %c \n Codigo: %s \n Nome Da Cidade: %s \n População: %d \n Área em KM²: %f \n PIB: %f \n Quantidade De Pontos Turisticos: %d\n", estado2, codigo2, nome2, populacao2, area2, pib2, pt2);


    return(0);
}