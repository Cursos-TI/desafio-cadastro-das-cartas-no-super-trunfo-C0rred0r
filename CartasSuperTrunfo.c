#include <stdio.h>

int main(){
    
    char estado1, estado2, nome1[20], nome2[20], codigo1[20], codigo2[20];
    unsigned long int populacao1, populacao2, pt1, pt2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibc1, pibc2, superPoder1, superPoder2;


    //entrada de dados

    printf("Bem Vindo ao Super Trunfo, Por Favor digite as Informações Da Primeira Carta \n");
    printf("Digite a Primeira Letra Do Estado Escolhido: \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo Para Seu Estado, sendo A letra seguido de um numero de 01 a 04  \n");
    scanf(" %s", &codigo1);

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

    printf("Digite o Codigo Para Seu Estado, sendo A letra seguido de um numero de 01 a 04 \n");
    scanf(" %s", &codigo2);

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

    //calculos

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibc1 = pib1 / populacao1;
    pibc2 = pib2 / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pt1 + pibc1 + ( (float) 1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pt2 + pibc2 + ( (float) 1 / densidade2);


 //saida de dados    

    //Carta 1
    printf("Aqui estão as informações das Cartas registradas: \n");
    printf("CARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome Da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área em KM²: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Quantidade De Pontos Turisticos: %d\n", pt1);
    printf("A Densidade populacional é: %.2f \n", densidade1);
    printf("O PIB(Produto Interno Bruto) per capita é: %.2f \n", pibc1);

    //Carta 2
    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome Da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área em KM²: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Quantidade De Pontos Turisticos: %d\n", pt2);
    printf("A Densidade populacional é: %.2f\n", densidade2);
    printf("O PIB(Produto Interno Bruto) per capita é: %.2f\n", pibc2);

    //comparação

    printf("**** COMPARAÇÃO DE CARTAS **** \n");
    printf("___SE A CARTA 1 FOR A VENCEDORA SERÁ: '1' SE A CARTA 2 FOR A VENCEDORA SERÁ: '0'___ \n");
    printf("População, Vencedor : (%d) \n", populacao1 > populacao2);
    printf("Área, Vencedor: (%d) \n", area1 > area2);
    printf("PIB Vencedor: (%d) \n", pib1 > pib2);
    printf("Ponto Turistico, Vencedor: (%d) \n", pt1 > pt2);
    printf("Densidade Populacional, Vencedor: (%d) \n", densidade1 < densidade2);
    printf("PIB per Capita, Vencedor: (%d) \n", pibc1 > pibc2);
    printf("Super Poder, Vencedor: (%d) \n", superPoder1 > superPoder2);
    


    return 0;

}