#include <stdio.h>
// trabalho realizado 
int main() {
    // Declaração das variáveis para armazenar os dados da
    // Carta 1
    char estado[3];
    char codigo_da_carta[10];
    char nome_da_cidade[30];
    int populacao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;

    // carta 2
    char estado2[3];
    char codigo_da_carta2[10];
    char nome_da_cidade2[30];
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;

    // Entrada de dados
   
    printf("Digite o estado (sigla): ");
    scanf(" %c%c", &estado, &estado + 1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome_da_cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    // carta 2
    printf("Digite o estado (sigla): ");
    scanf(" %c%c", &estado2, &estado2 + 1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome_da_cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Saída de dados

    printf("\nDados da cidade:\n");
    printf("Estado: %c%c\n", estado, estado + 1);
    printf("Codigo da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);

    printf("\nDados da cidade 2:\n");
    printf("Estado: %c%c\n", estado2, estado2 + 1);
    printf("Codigo da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);

    return 0;
}