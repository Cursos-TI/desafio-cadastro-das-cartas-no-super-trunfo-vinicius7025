/*
 * Programa: Super Trunfo - Desafio Nível Novato

 * Descrição: Este programa coleta e exibe informações de duas cartas de cidades
   para um jogo de Super Trunfo.

 */

#include <stdio.h>
int main(){

    // Declaração de variáveis para armazenar as informações das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;

    // Coleta as informações da Carta 1
    printf("Insira as informações da Carta 1 \n\n");
    printf("Digite uma letra de A a H para representar o estado: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (exemplo: A01, B02): \n");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%19s", nome1);
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
    scanf("%19s", nome2);
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área da cidade (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &pturisticos2);
    printf("\n\n");

    // Exibição das informações da Carta 1
    printf("As informações da Carta 1 são: \n\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %3s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f Bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n\n", pturisticos1);

    // Exibição das informações da Carta 2
    printf("As informações da Carta 2 são: \n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %3s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d", pturisticos2);


    return 0;
}
