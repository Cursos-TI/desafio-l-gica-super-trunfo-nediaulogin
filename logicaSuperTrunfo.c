#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // variaveis para switch e comparaçoes

    int opcao;
    long double atributo1;
    long double atributo2;

    // decidi em um primeiro momento ja criar variaveis que vão me ajudar na comparação e exibicao dos resultados
    // comparando 1 -> 2, A -> B e usando as na exibicao dos resultados 
    char nomeAtributo1[25];
    char nomeAtributo2[25];

    long double atributoA;
    long double atributoB;


    // Definição das variáveis para armazenar as propriedades das Cartas
    // Carta 1

    char codigo1[4] = "A01";
    char nomeCidade1[20] = "Tucano";
    int populacao1 = 7000;
    float area1 = 20000;
    float pib1 = 2;
    int pontosTuristicos1 = 3;
    char estado1[20] = "Bahia";
    long double densidadePop1;
    long double pibPer1;
    densidadePop1 = (long double) populacao1 / area1;

    // Carta 2

    char codigo2[4] = "B02";
    char nomeCidade2[20] = "Aracaju";
    int populacao2 = 7000;
    float area2 = 5000;
    float pib2 = 3;
    int pontosTuristicos2 = 10;
    char estado2[20] = "Sergipe";
    long double densidadePop2;
    long double pibPer2;
    densidadePop2 = (long double) populacao2 / area2;

    // Escolha de atributos para comparação das Cartas atraves dos menus

    printf("Escolha dois atributos para comparação\n");
    printf("1. População\n");
    printf("2. Pib\n");
    printf("3. Area\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            strcpy(nomeAtributo1, "População");
            atributo1 = populacao1;
            atributo2 = populacao2;
            printf("você escolheu População, escolha o segundo atributo\n");
            printf("2. Pib\n");
            printf("3. Area\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            break;

        case 2:
            strcpy(nomeAtributo1, "Pib");
            atributo1 = pib1;
            atributo2 = pib2;
            printf("você escolheu Pib, escolha o segundo atributo\n");
            printf("Escolha dois atributos para comparação\n");
            printf("1. População\n");
            printf("3. Area\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            break;

        case 3:
            strcpy(nomeAtributo1, "Area");
            atributo1 = area1;
            atributo2 = area2;
            printf("você escolheu Area, escolha o segundo atributo\n");
            printf("1. População\n");
            printf("2. Pib\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            break;
        case 4:
            strcpy(nomeAtributo1, "Pontos Turisticos");
            atributo1 = pontosTuristicos1;
            atributo2 = pontosTuristicos2;
            printf("você escolheu Pontos Turisticos, escolha o segundo atributo\n");
            printf("1. População\n");
            printf("2. Pib\n");
            printf("3. Area\n");
            printf("5. Densidade Populacional\n");
            break;
        case 5:
            strcpy(nomeAtributo1, "Densidade Populacional");
            atributo1 = densidadePop1;
            atributo2 = densidadePop2;
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
            strcpy(nomeAtributo2, "População");
            atributoA = populacao1;
            atributoB = populacao2;
            printf("você escolheu População como segundo atributo\n");

            break;

        case 2:
            strcpy(nomeAtributo2, "Pib");
            atributoA = pib1;
            atributoB = pib2;
            printf("você escolheu Pib como segundo atributo\n");

            break;

        case 3:
            strcpy(nomeAtributo2, "Area");
            atributoA = area1;
            atributoB = area2;
            printf("você escolheu Area, como segundo atributo\n");

            break;
        case 4:
            strcpy(nomeAtributo2, "Pontos Turisticos");
            atributoA = pontosTuristicos1;
            atributoB = pontosTuristicos2;
            printf("você escolheu Pontos Turisticos como segundo atributo\n");
            break;

        case 5:
            strcpy(nomeAtributo2, "Densidade Populacional");
            atributoA = densidadePop1;
            atributoB = densidadePop2;
            printf("você escolheu Pontos Densidade Populacional como segundo atributo\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    
    
    // Comparando os dois primeiros atributos

    char resultado[100];
    
    // Para o caso de atributos diferentes em que não são a densidade populacional
    if (atributo1 != atributo2 && strcmp(nomeAtributo1, "Densidade Populacional") != 0) {
        (atributo1 > atributo2) 
            ? snprintf(resultado, sizeof(resultado), "\n%s Ganhou no atributo %s", nomeCidade1, nomeAtributo1)
            : snprintf(resultado, sizeof(resultado), "\n%s Ganhou no atributo %s", nomeCidade2, nomeAtributo1);
            
            printf("\n%s\n", resultado);
            printf("%s => %s: %.3Lf, %s: %.3Lf\n", nomeAtributo1, nomeCidade1, atributo1, nomeCidade2, nomeAtributo2, atributo2);
    
    // Para o caso de atributos diferentes em que são a densidade populacional    
    } else if(atributo1 != atributo2 && strcmp(nomeAtributo1, "Densidade Populacional") == 0) {
          (atributo1 > atributo2) 
            ? snprintf(resultado, sizeof(resultado), "\n%s Ganhou no atributo %s", nomeCidade2, nomeAtributo1)
            : snprintf(resultado, sizeof(resultado), "\n%s Ganhou no atributo %s", nomeCidade1, nomeAtributo1); 

            printf("\n%s\n", resultado);
            printf("%s => %s: %.3Lf, %s: %.3Lf\n", nomeAtributo1, nomeCidade1, atributo1, nomeCidade2, nomeAtributo2, atributo2);

    //Usei o else para o caso em que da empate, pois acredito que não ha mais possibilidades
    //Neste caso não faz diferença se estamos tratando da densidade populacional ou não
    } else {
        printf("\nEmpate no atributo %s entre as Cidades %s e %s\n", nomeAtributo1, nomeCidade2, nomeCidade1);
        printf("%s => %s: %.3Lf, %s: %.3Lf\n", nomeAtributo1, nomeCidade1, atributo1, nomeCidade2, nomeAtributo2, atributo2);
    }


    // Comparando os atributos restantes
    // Aqui estou apenas repetindo o processo
    if (atributoA != atributoB && strcmp(nomeAtributo2, "Densidade Populacional") != 0) {
        (atributoA > atributoB) 
            ? snprintf(resultado, sizeof(resultado), "\n%s Ganhou no atributo %s", nomeCidade1, nomeAtributo2)
            : snprintf(resultado, sizeof(resultado), "\n%s Ganhou no atributo %s", nomeCidade2, nomeAtributo2);
            
            printf("\n%s\n", resultado);
            printf("%s => %s: %.3Lf, %s: %.3Lf\n", nomeAtributo2, nomeCidade1, atributoA, nomeCidade2, nomeAtributo2, atributoB);
    
    // Para o caso de atributos diferentes em que são a densidade populacional    
    } else if(atributoA != atributoB && strcmp(nomeAtributo2, "Densidade Populacional") == 0) {
          (atributoA > atributoB) 
            ? snprintf(resultado, sizeof(resultado), "\n%s Ganhou no atributo %s", nomeCidade2, nomeAtributo2)
            : snprintf(resultado, sizeof(resultado), "\n%s Ganhou no atributo %s", nomeCidade1, nomeAtributo2); 

            printf("\n%s\n", resultado);
            printf("%s => %s: %.3Lf, %s: %.3Lf\n", nomeAtributo1, nomeCidade1, atributoA, nomeCidade2, nomeAtributo2, atributoB);

    //Usei o else para o caso em que da empate, pois acredito que não ha mais possibilidades
    //Neste caso não faz diferença se estamos tratando da densidade populacional ou não
    } else {
        printf("\nEmpate no atributo %s entre as Cidades %s e %s\n", nomeAtributo2, nomeCidade2, nomeCidade1);
        printf("%s => %s: %.3Lf, %s: %.3Lf\n", nomeAtributo2, nomeCidade1, atributoA, nomeCidade2, nomeAtributo2, atributoB);

    }
    
    // agora irei somar os atributos, no caso da densidade irei subtrair para ser coerente

    long double somaAtributos1;
    long double somaAtributos2;
    
    // caso primeiro atributo seja densidade
    if (strcmp(nomeAtributo1, "Densidade Populacional") == 0) {

        somaAtributos1 = atributoA - atributo1;

    // caso segundo atributo seja densidade
    } else if (strcmp(nomeAtributo2, "Densidade Populacional") == 0) {

        somaAtributos1 = atributo1 - atributoA;

    // caso em que nenhum dos dois é densidade
    } else {

        somaAtributos1 = atributo1 + atributoA;

    }

    //repetindo o preocesso da soma
    if (strcmp(nomeAtributo1, "Densidade Populacional") == 0) {

        somaAtributos2 = atributoB - atributo2;

    // caso segundo atributo seja densidade
    } else if (strcmp(nomeAtributo2, "Densidade Populacional") == 0) {

        somaAtributos2 = atributo2 - atributoB;

    // caso em que nenhum dos dois é densidade
    } else {

        somaAtributos2 = atributo2 + atributoB;
    }

    // Resultado final da soma

    // Empate
    if (somaAtributos1 == somaAtributos2) {

        printf("\n EMPATE \n%s: %.3Lf, %s: %3.Lf", nomeCidade1, somaAtributos1, nomeCidade2, somaAtributos2);
    
    // Primeira Cidade venceu
    } else if (somaAtributos1 > somaAtributos2) {

        printf("\n Cidade %s VENCEU:\n %s: %.3Lf, %s: %3.Lf", nomeCidade1, nomeCidade1, somaAtributos1, nomeCidade2, somaAtributos2);

    // Segunda Cidade venceu
    } else {

        printf("\n Cidade %s VENCEU:\n %s: %.3Lf, %s: %3.Lf", nomeCidade2, nomeCidade2, somaAtributos2, nomeCidade1, somaAtributos1);


    }


    return 0;
}
