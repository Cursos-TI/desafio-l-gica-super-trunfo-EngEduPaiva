#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[3]; // Estado (sigla)
    char codigo[10]; // Código da carta
    char nomeCidade[50]; // Nome da cidade
    int populacao; // População
    float area; // Área
    float pib; // PIB
    int numPontosTuristicos; // Número de pontos turísticos
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    // Definindo duas cartas
    Carta carta1 = {"SP", "C1", "São Paulo", 12300000, 1521.11, 700000000, 200};
    Carta carta2 = {"RJ", "C2", "Rio de Janeiro", 6000000, 1182.3, 400000000, 150};

    // Calculando Densidade Populacional e PIB per capita
    float densidadePopulacional1 = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    float densidadePopulacional2 = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    float pibPerCapita1 = calcularPibPerCapita(carta1.pib, carta1.populacao);
    float pibPerCapita2 = calcularPibPerCapita(carta2.pib, carta2.populacao);

    // Atributo escolhido para comparação
    // Neste caso, estamos comparando a População
    int atributoEscolhido = 1; // 1 para População, 2 para Área, 3 para PIB, 4 para Densidade Populacional, 5 para PIB per capita

    // Comparando as cartas com base no atributo escolhido
    if (atributoEscolhido == 1) { // Comparação pela População
        printf("Comparacao de cartas (Atributo: Populacao):\n");
        printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);
        
        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (atributoEscolhido == 4) { // Comparação pela Densidade Populacional
        printf("Comparacao de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, densidadePopulacional1);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, densidadePopulacional2);
        
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    }
    // Adicione mais condições para outros atributos se necessário

    return 0;
}