#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    // Carta 1

    char codigo1[4]; 
    char nomeCidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char estado1[20];
    long double densidadePop1;
    long double pibPer1;

    // Carta 2

    char codigo2[4];
    char nomeCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    char estado2[20];
    long double densidadePop2;
    long double pibPer2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    
    // Entrada Carta1

    printf("=== Cadastro de Carta Super Trunfo ===\n");
    printf("\n=== Carta1 ===\n");
    
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta2

    printf("\n=== Carta2 ===\n");
    
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); 

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    printf("\nComparação de cartas (Atributo: Pontos Turisticos):\n");
 
    printf("\nCarta 1 - %s: %d\n", estado1, pontosTuristicos1);
    printf("Carta 2 - %s: %d\n", estado2, pontosTuristicos2);


    if ( pontosTuristicos1 > pontosTuristicos2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", estado1); 
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", estado2);
    }

    return 0;
}
