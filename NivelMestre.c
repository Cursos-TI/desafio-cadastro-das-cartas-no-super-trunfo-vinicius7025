/*
 
 * Programa: Super Trunfo - Desafio Nível Mestre

 * Descrição: Este programa coleta informações de cada carta, calcula a Densidade Populacional e PIB per Capita, 
   calcula o "Super Poder", compara as Cartas e exibe os Resultados das Comparações entre as duas cartas.

 */

 #include <stdio.h>
 int main(){
 
  // Declaração de variáveis para armazenar as informações das cartas
     char estado1, estado2;
     char codigo1[4], codigo2[4];
     char nome1[50], nome2[50];
     long int populacao1, populacao2;
     int pturisticos1, pturisticos2;
     float area1, area2;
     float pib1, pib2;
     float percapita1, percapita2;
     float densidade1, densidade2;
     float superpoder1, superpoder2;
 
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
     printf("Digite o código da cidade ex: A01, B02: \n");
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

  // Calculando Densidade Populacional e PIB per Capita das Cartas
     densidade1 = populacao1 / area1;
     percapita1 = (pib1 * 1000000000) / populacao1;

     densidade2 = populacao2 / area2;
     percapita2 = (pib2 * 1000000000) / populacao2;

  // Calculando o "Super Poder" das cartas
     superpoder1 = (populacao1 + area1 + pib1 + pturisticos1 + percapita1 + 1 / densidade1);

     superpoder2 = (populacao2 + area2 + pib2 + pturisticos2 + percapita2 + 1 / densidade2);

  // Exibindo a Comparação das Cartas
      printf("*** Resultados da Comparação ***\n\n");

      printf("População: %s \n", (populacao1 > populacao2)? "Carta 1 Venceu" : "Carta 2 Venceu");
      printf("Área: %s \n", (area1 > area2)? "Carta 1 Venceu" : "Carta 2 Venceu");
      printf("PIB: %s \n", (pib1 > pib2)? "Carta 1 Venceu" : "Carta 2 Venceu");
      printf("Pontos Turísticos: %s \n", (pturisticos1 > pturisticos2)? "Carta 1 Venceu" : "Carta 2 Venceu");
      printf("Densidade Populacional: %s \n", (densidade1 > densidade2)? "Carta 1 Venceu" : "Carta 2 Venceu");
      printf("PIB per Capita: %s \n", (percapita1 > percapita2)? "Carta 1 Venceu" : "Carta 2 Venceu");
      printf("Super Poder: %s \n", (superpoder1 > superpoder2)? "Carta 1 Venceu" : "Carta 2 Venceu");
      return 0;
 }
