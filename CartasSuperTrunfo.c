#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main (){
    //definindo as variaveis que iremos usar abaixo
    char estado, cidade[30], carta[30], estado2, cidade2[30], carta2[30];
    int pontost , num, pontost2 , num2;
    float pib, area, pib2, area2, dens1, dens2, capta1, capta2;
    unsigned int populacao, populacao2 ;
    printf("*** Super Trunfo Cartas***\n");
    printf("Por favor insira os dados da sua carta 1:\n"); //printf para enviar ao usuarios informaçoes que ele deve inserir para armazenar
    printf("Digite uma letra de A até H para representar os oito estados: \n");
        scanf(" %c", &estado); //scanf armazenando dados dos usuarios nas variaveis

    printf("Digite um numero de 1 até 4 para representar um dos oito estados: \n");
        scanf(" %d", &num);

    printf("Digite o nome da cidade:\n");
        getchar(); //limpa o caracter ENTER do buffer
        fgets(cidade, 30, stdin);
        cidade[strcspn(cidade, "\n")] = 0; //limpa o \n do buffer

    printf("Digite o numero de habitantes da cidade \n");
        scanf(" %u", &populacao);
    
    printf("Digite a área da cidade em quilometros quadrados: \n");
        scanf(" %f", &area);
    
    printf("Digite o (PIB) da sua cidade em bilhoes de Reais: \n");
        scanf(" %f", &pib);
    
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
        scanf(" %d", &pontost);

        printf("Por favor insira os dados da sua carta 2:\n"); //carta 2 
    printf("Digite uma letra de A até H para representar os oito estados: \n");
        scanf(" %c", &estado2); 

    printf("Digite um numero de 1 até 4 para representar um dos oito estados: \n");
        scanf(" %d", &num2);

    printf("Digite o nome da cidade:\n");
        getchar(); 
        fgets(cidade2, 30, stdin);
        cidade2[strcspn(cidade2, "\n")] = 0; 

    printf("Digite o numero de habitantes da cidade \n");
        scanf(" %u", &populacao2);
    
    printf("Digite a área da cidade em quilometros quadrados: \n");
        scanf(" %f", &area2);
    
    printf("Digite o (PIB) da sua cidade em bilhoes de Reais: \n");
        scanf(" %f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
        scanf(" %d", &pontost2);


        dens1 = (float) populacao / area; //calculo densidade populacional1
        capta1 = (float) pib / populacao; // calculo pib per capta
        //retornar ao usuario a informação de suas cartas

    printf("Carta 1: \n");
    printf("Estado: %c\n", toupper(estado));
    printf("Código: %c%02d\n", toupper(estado), num);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de pontos Turísticos: %d\n",pontost);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n", capta1);

        dens2 = (float) populacao2 / area2 ; //calculo densidade populacional2
        capta2 = (float) pib2 / populacao2; // calculo pib per capta
        printf("Carta 2: \n"); // carta 2
    printf("Estado: %c\n", toupper(estado2));
    printf("Código: %c%02d\n", toupper(estado2), num2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n",pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", capta2);

    //calculando super poder das cartas comparar e devolver quem venceu ao usuario
    float superpoder1 = (float)(area + populacao + pontost + pib + capta1 - dens1 );
    float superpoder2 = (float)(area2 + populacao2 + pontost2 + pib2 +capta2 - dens2);
    // comparando valores
    int resultadopop = populacao > populacao2;
    int resultadoarea = area > area2;
    int resultadopontost = pontost > pontost2;
    int resultadopib = pib > pib2;
    int resultadocapta = capta1 > capta2;
    int resultadodens = dens1 < dens2;
    int resultadopoder = superpoder1 > superpoder2;
    //enviar ao usuario as informaçoes das cartas
    printf("*** Comparação de Cartas***\n");
    if (resultadopop == 1) {printf("População: Carta 1 venceu\n");} 
        else {printf("População: Carta 2 venceu\n");}
    if (resultadoarea == 1) {printf("Área: Carta 1 venceu\n");} 
        else {printf("Área: Carta 2 venceu\n");}
    if (resultadopontost == 1) {printf("Pontos Turísticos: Carta 1 venceu\n");} 
        else {printf("Pontos Turísticos: Carta 2 venceu\n");}
    if (resultadopib == 1) {printf("PIB: Carta 1 venceu\n");} 
        else {printf("PIB: Carta 2 venceu\n");}
    if (resultadocapta == 1) {printf("PIB per Capita: Carta 1 venceu\n");} 
        else {printf("PIB per Capita: Carta 2 venceu\n");}
    if (resultadodens == 1) {printf("Densidade Populacional: Carta 1 venceu\n");} 
        else {printf("Densidade Populacional: Carta 2 venceu\n");}
    if (resultadopoder == 1) {printf("Super Poder: Carta 1 venceu\n");} 
        else {printf("Super Poder: Carta 2 venceu\n");}

    return 0; 
}