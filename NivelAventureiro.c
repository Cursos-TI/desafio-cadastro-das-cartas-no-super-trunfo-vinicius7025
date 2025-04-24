/*
 
 * Programa: Super Trunfo - Desafio Nível Aventureiro

 * Descrição: Este programa coleta informações de cada carta, calcula a Densidade Populacional e PIB per Capita 
   e exibe informações de duas cartas de cidades para um jogo de Super Trunfo.

 */

 #include <stdio.h>
 int main(){
 
     // Declaração de variáveis para armazenar as informações das cartas
     char estado1, estado2;
     char codigo1[4], codigo2[4];
     char nome1[50], nome2[50];
     int populacao1, populacao2;
     int pturisticos1, pturisticos2;
     float area1, area2;
     float pib1, pib2;
     float percapita1, percapita2;
     float densidade1, densidade2;
 
     // Coleta as informações da Carta 1
     printf("Insira as informações da Carta 1 \n\n");
     printf("Digite uma letra de A a H para representar o estado: \n");
     scanf(" %c", &estado1);
     printf("Digite o código da cidade (exemplo: A01, B02): \n");
     scanf("%3s", codigo1);
     printf("Digite o nome da cidade: \n");
     scanf(" %[^\n]", nome1);
     printf("Digite o numero de habitantes da cidade: \n");
     scanf("%d", &populacao1);
     printf("Digite a Área da cidade (em km²): \n");
     scanf("%f", &area1);
     printf("Digite o PIB da cidade: \n");
     scanf("%f", &pib1);
     printf("Digite o número de pontos turisticos da cidade: \n");
     scanf("%d", &pturisticos1);
     printf("\n\n");
 
     // Coleta as informações da Carta 2
     printf("Insira as informações da Carta 2 \n\n");
     printf("Digite uma letra de A a H para representar o estado: \n");
     scanf(" %c", &estado2);
     printf("Digite o código da cidade (exemplo: A01, B02): \n");
     scanf("%3s", codigo2);
     printf("Digite o nome da cidade: \n");
     scanf(" %[^\n]", nome2);
     printf("Digite o numero de habitantes da cidade: \n");
     scanf("%d", &populacao2);
     printf("Digite a Área da cidade (em km²): \n");
     scanf("%f", &area2);
     printf("Digite o PIB da cidade: \n");
     scanf("%f", &pib2);
     printf("Digite o número de pontos turisticos da cidade: \n");
     scanf("%d", &pturisticos2);
     printf("\n\n");

     // Calculando Densidade Populacional e PIB per Capita Carta 1
     densidade1 = populacao1 / area1;
     percapita1 = (pib1 * 1000000000) / populacao1;

     // Calculando Densidade Populacional e PIB per Capita Carta 2
     densidade2 = populacao2 / area2;
     percapita2 = (pib2 * 1000000000) / populacao2;

     // Exibição das informações da Carta 1
     printf("As informações da Carta 1 são: \n\n");
     printf("Estado: %c \n", estado1);
     printf("Código: %.3s \n", codigo1);
     printf("Nome da Cidade: %s \n", nome1);
     printf("População: %d \n", populacao1);
     printf("Área: %.2f km² \n", area1);
     printf("PIB: %.3f Bilhões de reais \n", pib1);
     printf("Número de pontos turísticos: %d \n", pturisticos1);
     printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
     printf("PIB per Capita: %.2f reais \n\n", percapita1);
 
     // Exibição das informações da Carta 2
     printf("As informações da Carta 2 são: \n\n");
     printf("Estado: %c \n", estado2);
     printf("Código: %.3s \n", codigo2);
     printf("Nome da Cidade: %s \n", nome2);
     printf("População: %d \n", populacao2);
     printf("Área: %.2f km² \n", area2);
     printf("PIB: %.3f Bilhões de reais \n", pib2);
     printf("Número de pontos turísticos: %d \n", pturisticos2);
     printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
     printf("PIB per Capita: %.2f reais", percapita2);
 
 
     return 0;
 }
