#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main (){
    //definindo as variaveis que iremos usar abaixo
    char estado, cidade[30], carta[30], estado2, cidade2[30], carta2[30];
    int populacao, pontost , num, populacao2, pontost2 , num2;
    float pib, area, pib2, area2;

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
        scanf(" %d", &populacao);
    
    printf("Digite a área da cidade em quilometros quadrados: \n");
        scanf(" %f", &area);
    
    printf("Digite o (PIB) da sua cidade: \n");
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
        scanf(" %d", &populacao2);
    
    printf("Digite a área da cidade em quilometros quadrados: \n");
        scanf(" %f", &area2);
    
    printf("Digite o (PIB) da sua cidade em bilhoes de Reais: \n");
        scanf(" %f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
        scanf(" %d", &pontost2);

        //retornar ao usuario a informação de suas cartas
    printf("Carta 1: \n");
    printf("Estado: %c\n", toupper(estado));
    printf("Código: %c%02d\n", toupper(estado), num);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de pontos Turísticos: %d\n",pontost);
    printf("\n");
        printf("Carta 2: \n"); // carta 2
    printf("Estado: %c\n", toupper(estado2));
    printf("Código: %c%02d\n", toupper(estado2), num2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n",pontost2);
    
    return 0; 
}