
#include <stdio.h>

int main() {
    // Variáveis para a carta 1
    char estado_1[50];          // Variável para o estado da carta 1
    int numerodcarta1;          // Variável para o número da carta 1
    char nomecidde1[60];        // Variável para o nome da cidade da carta 1
    float popula_1;             // Variável para a população da carta 1
    float areakm_1;             // Variável para a área em km² da carta 1
    int NumerodePontosTu_1;     // Variável para o número de pontos turísticos da carta 1
    float Pb_1;                 // Variável para o PIB da carta 1

    // Variáveis para a carta 2
    char estado_2[50];          // Variável para o estado da carta 2
    int numerodcarta2;          // Variável para o número da carta 2
    char nomecidde2[60];        // Variável para o nome da cidade da carta 2
    float popula_2;             // Variável para a população da carta 2
    float areakm_2;             // Variável para a área em km² da carta 2
    int NumerodePontosTu_2;     // Variável para o número de pontos turísticos da carta 2
    float Pb_2;                 // Variável para o PIB da carta 2

    // Outras variáveis (não usadas no código original, mas mantidas para referência)
    // int ATAQUE_1;
    // int ATAQUE_2;
    // int ATAQUE_3;
    // int cart_1;
    // int cart_2;
    // int ganhou_1;
    // int ganhou_2;
    // int ganhou_3;
    // int ganhou_4;
    // int n_ganhou1;
    // int n_ganhou2;
    // int n_ganhou3;
    // int n_ganhou4;
    // int PERDEU_1;
    // int PERDEU_2;
    // int PERDEU_3;
    // int PERDEU_4;
    // int jogador_1;
    // int jogador_2;

    printf("Vamos criar as cartas:\n");       // Mensagem inicial
    printf("Escreva o estado da carta 1:\n"); // Solicita o estado da carta 1
    scanf("%s", estado_1);                    // Lê o estado da carta 1

    printf("Escreva o numero da carta 1:\n");// Solicita o número da carta 1
    scanf("%d", &numerodcarta1);             // Lê o número da carta 1

    printf("Escreva o nome da cidade da carta 1:\n");// Solicita o nome da cidade da carta 1
    scanf("%s", nomecidde1);                         // Lê o nome da cidade da carta 1

    printf("Escreva o numero da população da carta 1:\n");// Solicita a população da carta 1
    scanf("%f", &popula_1);                             // Lê a população da carta 1

    printf("Escreva a area em km2 da carta 1:\n"); // Solicita a área em km² da carta 1
    scanf("%f", &areakm_1);                      // Lê a área em km² da carta 1

    printf("Escreva o numero de pontos turisticos da carta 1:\n");// Solicita o número de pontos turísticos da carta 1
    scanf("%d", &NumerodePontosTu_1);                // Lê o número de pontos turísticos da carta 1

    printf("Escreva o numero do Pib da carta 1:\n");// Solicita o PIB da carta 1
    scanf("%f", &Pb_1);                           // Lê o PIB da carta 1

    printf("Estado: %s\n", estado_1);               // Imprime o estado da carta 1
    printf("Numero da carta: %d\n", numerodcarta1); // Imprime o número da carta 1
    printf("Nome da cidade: %s\n", nomecidde1);     // Imprime o nome da cidade da carta 1
    printf("População: %.2f\n", popula_1);          // Imprime a população da carta 1
    printf("Area Km2: %.2f\n", areakm_1);           // Imprime a área em km² da carta 1
    printf("Pontos Turisticos: %d\n", NumerodePontosTu_1); // Imprime o número de pontos turísticos da carta 1
    printf("Pib: %.2f\n", Pb_1);                    // Imprime o PIB da carta 1

    printf("Vamos criar as cartas:\n");       // Mensagem inicial para a carta 2
    printf("Escreva o estado da carta 2:\n"); // Solicita o estado da carta 2
    scanf("%s", estado_2);                    // Lê o estado da carta 2

    printf("Escreva o numero da carta 2:\n");// Solicita o número da carta 2
    scanf("%d", &numerodcarta2);             // Lê o número da carta 2

    printf("Escreva o nome da cidade da carta 2:\n");  // Solicita o nome da cidade da carta 2
    scanf("%s", nomecidde2);                           // Lê o nome da cidade da carta 2

    printf("Escreva o numero da população da carta 2:\n");   // Solicita a população da carta 2
    scanf("%f", &popula_2);                                // Lê a população da carta 2

    printf("Escreva a area em km2 da carta 2:\n"); // Solicita a área em km² da carta 2
    scanf("%f", &areakm_2);                       // Lê a área em km² da carta 2

    printf("Escreva o numero de pontos turisticos da carta 2:\n");// Solicita o número de pontos turísticos da carta 2
    scanf("%d", &NumerodePontosTu_2);                // Lê o número de pontos turísticos da carta 2

    printf("Escreva o numero do Pib da carta 2:\n");// Solicita o PIB da carta 2
    scanf("%f", &Pb_2);                           // Lê o PIB da carta 2

    printf("Estado: %s\n", estado_2);               // Imprime o estado da carta 2
    printf("Numero da carta: %d\n", numerodcarta2); // Imprime o número da carta 2
    printf("Nome da cidade: %s\n", nomecidde2);     // Imprime o nome da cidade da carta 2
    printf("População: %.2f\n", popula_2);          // Imprime a população da carta 2
    printf("Area Km2: %.2f\n", areakm_2);           // Imprime a área em km² da carta 2
    printf("Pontos Turisticos: %d\n", NumerodePontosTu_2); // Imprime o número de pontos turísticos da carta 2
    printf("Pib: %.2f\n", Pb_2);                    // Imprime o PIB da carta 2
    printf("fim por enquanto\n");
    return 0;
}
