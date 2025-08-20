#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // variavel para switch e comparaçoes

    int opcao;
    unsigned long int atributo1;
    unsigned long int atributo2;

    // decidi em um primeiro momento ja criar variaveis que me ajudaram na comparação e exibicao dos resultados
    // comparando 1 -> A, 2 -> B e usando elas na exibicao dos resultados acredito que em um primeiro momento
    // isso me ajude a resolver de forma mais direta

    unsigned long int atributoA;
    unsigned long int atributoB;


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

    // Escolha de atributos para comparação

    printf("Escolha dois atributos para comparação\n");
    printf("1. População\n");
    printf("2. Pib\n");
    printf("3. Area\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            atributo1 = populacao1;
            atributoA = populacao2;
            printf("você escolheu População, escolha o segundo atributo\n");
            printf("2. Pib\n");
            printf("3. Area\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            break;

        case 2:
            atributo1 = pib1;
            atributoA = pib2;
            printf("você escolheu Pib, escolha o segundo atributo\n");
            printf("Escolha dois atributos para comparação\n");
            printf("1. População\n");
            printf("3. Area\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            break;

        case 3:
            atributo1 = area1;
            atributoA = area2;
            printf("você escolheu Area, escolha o segundo atributo\n");
            printf("1. População\n");
            printf("2. Pib\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            break;
        case 4:
            atributo1 = pontosTuristicos1;
            atributoA = pontosTuristicos2;
            printf("você escolheu Pontos Turisticos, escolha o segundo atributo\n");
            printf("1. População\n");
            printf("2. Pib\n");
            printf("3. Area\n");
            printf("5. Densidade Populacional\n");
            break;
        case 5:
            atributo1 = densidadePop1;
            atributoA = densidadePop2;
            printf("você escolheu Pontos Densidade Populacional, escolha o segundo atributo\n");
            printf("1. População\n");
            printf("2. Pib\n");
            printf("3. Area\n");
            printf("4. Pontos Turisticos\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }
    
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            atributo2 = populacao1;
            atributoB = populacao2;
            printf("você escolheu População como segundo atributo\n");

            break;

        case 2:
            atributo2 = pib1;
            atributoB = pib2;
            printf("você escolheu Pib como segundo atributo\n");

            break;

        case 3:
            atributo2 = area1;
            atributoB = area2;
            printf("você escolheu Area, como segundo atributo\n");

            break;
        case 4:
            atributo2 = pontosTuristicos1;
            atributoB = pontosTuristicos2;
            printf("você escolheu Pontos Turisticos como segundo atributo\n");

            break;
        case 5:
            atributo2 = densidadePop1;
            atributoB = densidadePop2;
            printf("você escolheu Pontos Densidade Populacional como segundo atributo\n");


        default:
            printf("Opção inválida. Tente novamente.\n");
        }
        
    printf("%Lu,%Lu,%Lu,%Lu,", atributo1, atributo2, atributoA, atributoB);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
   /* printf("\nComparação de cartas (Atributo: Pontos Turisticos):\n");
 
    printf("\nCarta 1 - %s: %d\n", estado1, pontosTuristicos1);
    printf("Carta 2 - %s: %d\n", estado2, pontosTuristicos2);


    if ( pontosTuristicos1 > pontosTuristicos2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", estado1); 
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", estado2);
    }*/

    return 0;
}
