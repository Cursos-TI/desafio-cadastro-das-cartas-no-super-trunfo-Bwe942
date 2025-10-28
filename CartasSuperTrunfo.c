#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    // definindo as variaveis que iremos usar abaixo
    char estado, cidade[30], carta[30], estado2, cidade2[30], carta2[30];
    int pontost, num, pontost2, num2, escolhaJogador, atributo, resultado1, resultado2, atributo2;
    float pib, area, pib2, area2, dens1, dens2, capta1, capta2;
    unsigned int populacao, populacao2;
    printf("*** Super Trunfo Cartas***\n");
    printf("Por favor insira os dados da sua carta 1:\n"); // printf para enviar ao usuarios informaçoes que ele deve inserir para armazenar
    printf("Digite uma letra de A até H para representar os oito estados: \n");
    scanf(" %c", &estado); // scanf armazenando dados dos usuarios nas variaveis

    printf("Digite um numero de 1 até 4 para representar um dos oito estados: \n");
    scanf(" %d", &num);

    printf("Digite o nome da cidade:\n");
    getchar(); // limpa o caracter ENTER do buffer
    fgets(cidade, 30, stdin);
    cidade[strcspn(cidade, "\n")] = 0; // limpa o \n do buffer

    printf("Digite o numero de habitantes da cidade \n");
    scanf(" %u", &populacao);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf(" %f", &area);

    printf("Digite o (PIB) da sua cidade em bilhoes de Reais: \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &pontost);

    printf("Por favor insira os dados da sua carta 2:\n"); // carta 2
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

    dens1 = (float)populacao / area; // calculo densidade populacional1
    float superpoder1 = (float)(area + populacao + pontost + pib + capta1 - dens1);
    capta1 = (float)pib / populacao; // calculo pib per capta
    float superpoder2 = (float)(area2 + populacao2 + pontost2 + pib2 + capta2 - dens2);
                                     // retornar ao usuario a informação de suas cartas

    printf("Carta 1: \n");
    printf("Estado: %c\n", toupper(estado));
    printf("Código: %c%02d\n", toupper(estado), num);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de pontos Turísticos: %d\n", pontost);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n", capta1);
    printf("Super Poder: %f pontos \n", superpoder1);

    dens2 = (float)populacao2 / area2; // calculo densidade populacional2
    capta2 = (float)pib2 / populacao2; // calculo pib per capta
    printf("Carta 2: \n");             // carta 2
    printf("Estado: %c\n", toupper(estado2));
    printf("Código: %c%02d\n", toupper(estado2), num2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", capta2);
    printf("Super Poder: %f pontos \n", superpoder2);

    // Menu interativo
    printf("*** Escolha uma opção: ***\n");
    printf("1 : Iniciar o Jogo\n");
    printf("2 : Regras\n");
    printf("3 : Sair\n");

    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
        printf("Selecione o  Primeiro atributo da carta para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        scanf("%d", &atributo);

        switch (atributo)
        {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %u habitantes\n", cidade, populacao);
            printf("%s: %u habitantes\n", cidade2, populacao2);
            if (populacao == populacao2)
            {
                resultado1 = 2;
            }
            else
            {
                resultado1 = populacao > populacao2 ? 1 : 0;
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", cidade, area);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area == area2)
            {
                resultado1 = 2;
            }
            else
            {
                resultado1 = area > area2 ? 1 : 0;
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade, pib);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib == pib2)
            {
                resultado1 = 2;
            }
            else
            {
                resultado1 = pib > pib2 ? 1 : 0;
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", cidade, pontost);
            printf("%s: %d pontos turísticos\n", cidade2, pontost2);
            if (pontost == pontost2)
            {
                resultado1 = 2;
            }
            else
            {
                resultado1 = pontost > pontost2 ? 1 : 0;
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade, dens1);
            printf("%s: %.2f hab/km²\n", cidade2, dens2);
            if (dens1 == dens2)
            {
                resultado1 = 2;
            }
            else
            {
                resultado1 = dens2 > dens1 ? 1 : 0;
            }
            break;
        default:
            printf("Opção inválida de atributo!\n");
            break;
        }

        printf("Selecione o  Segundo atributo da carta para comparar (Nao Pode ser o mesmo Do anterior ):\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        scanf("%d", &atributo2);

        switch (atributo2)
        {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %u habitantes\n", cidade, populacao);
            printf("%s: %u habitantes\n", cidade2, populacao2);
            if (populacao == populacao2)
            {
                resultado2 = 2;
            }
            else
            {
                resultado2 = populacao > populacao2 ? 1 : 0;
            }
            break;
        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", cidade, area);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area == area2)
            {
                resultado2 = 2;
            }
            else
            {
                resultado2 = area > area2 ? 1 : 0;
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade, pib);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib == pib2)
            {
                resultado2 = 2;
            }
            else
            {
                resultado2 = pib > pib2 ? 1 : 0;
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", cidade, pontost);
            printf("%s: %d pontos turísticos\n", cidade2, pontost2);
            if (pontost == pontost2)
            {
                resultado2 = 2;
            }
            else
            {
                resultado2 = pontost > pontost2 ? 1 : 0;
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade, dens1);
            printf("%s: %.2f hab/km²\n", cidade2, dens2);
            if (dens1 == dens2)
            {
                resultado2 = 2;
            }
            else
            {
                resultado2 = dens2 > dens1 ? 1 : 0;
            }

        default:
            printf("Opção inválida de atributo!\n");
            break;
        }
            // Contabiliza pontos para determinar a carta vencedora
    int pontosCarta1 = 0, pontosCarta2 = 0;

    if (resultado1 == 1) pontosCarta1++;
    else if (resultado1 == 0) pontosCarta2++;

    if (resultado2 == 1) pontosCarta1++;
    else if (resultado2 == 0) pontosCarta2++;

    // Mostra qual carta venceu
if (pontosCarta1 > pontosCarta2) {
    printf("A carta vencedora é a CARTA 1: %s\n", cidade);
} else if (pontosCarta2 > pontosCarta1) {
    printf("A carta vencedora é a CARTA 2: %s\n", cidade2);
} else {
    printf("O resultado é um EMPATE!\n");
}
        break;
        

    case 2:
        printf("Os jogadores deverá escolher dois atributo das cartas para a batalha.\n");
        printf("O atributo nao podera ser o mesmo nas duas escolhas\n");
        printf("A carta com o maior valor vence, exceto na Densidade Demográfica,\n");
        printf("onde o menor valor é o vencedor.\n");
        printf("Em caso de igualdade, o resultado é 'Empate!'\n");
        break;

    case 3:
        printf("Saindo do jogo...\n");
        break;

    default:
        printf("Opção inválida! \n");
        break;
    }
return 0;
}