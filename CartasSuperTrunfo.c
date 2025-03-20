#include <stdio.h>

typedef struct {
    char estado [3]; // Código do estado (ex: A, B)
    char codigo[5];  // Código da cidade (ex: A01, B02)
    char cidade[50]; 
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibpercapita;
    
} Carta; 

int main() {
    // Duas cartas
    Carta carta1, carta2;

    // primeira carta
        printf("\n===== CADASTRO DA PRIMEIRA CARTA =====\n");
        printf("Digite o código do primeiro Estado: (Ex: A) \n ");
        scanf("%s", carta1.estado);
        printf("Digite o nome da cidade: \n");
        scanf(" %[^\n]", carta1.cidade);
        printf("Digite o código da primeira cidade: (Ex: A01) \n ");
        scanf("%3s", carta1.codigo);
        printf("Digite a população: \n");
        scanf("%d", &carta1.populacao);
        printf("Digite a área: \n");
        scanf("%f", &carta1.area);
        printf("Digite o PIB: \n");
        scanf("%f", &carta1.pib);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &carta1.pontosturisticos);
    
    // NIVEL AVANÇADO - CALCULO DE VALORES CARTA 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibpercapita = carta1.pib / carta1.populacao;

        // Exibição dos dados cadastrados
        printf("\n===== DADOS DA PRIMEIRA CARTA =====\n");
        printf("Estado: %s\n", carta1.estado);
        printf("Código: %s\n", carta1.codigo);
        printf("Cidade: %s\n", carta1.cidade);
        printf("População: %d\n", carta1.populacao);
        printf("Área: %.2f km²\n", carta1.area);
        printf("PIB R$: %.2f\n", carta1.pib);
        printf("Pontos turísticos: %d\n", carta1.pontosturisticos);
        printf("Densidade Populacional: %.2f Habitantes por Km²\n", carta1.densidade);
        printf("PIB per Capita R$: %.2f\n", carta1.pibpercapita);
    
    // segunda carta
        printf("\n===== CADASTRO DA SEGUNDA CARTA =====\n");
        printf("Digite o código do segundo Estado: (Ex: B) \n");
        scanf("%s", carta2.estado);
        printf("Digite o nome da cidade: \n");
        scanf(" %[^\n]", carta2.cidade);
        printf("Digite o código da segunda cidade: (Ex: B01)\n");
        scanf("%3s", carta2.codigo);
        printf("Digite a população: \n");
        scanf("%d", &carta2.populacao);
        printf("Digite a área: \n");
        scanf("%f", &carta2.area);
        printf("Digite o PIB: \n");
        scanf("%f", &carta2.pib);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &carta2.pontosturisticos);

    // NIVEL AVANÇADO - CALCULO DE VALORES CARTA 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibpercapita = carta2.pib / carta2.populacao;
    
    // Exibição dos dados cadastrados

        printf("\n===== DADOS DA SEGUNDA CARTA =====\n");
        printf("Estado: %s\n", carta2.estado);
        printf("Código: %s\n", carta2.codigo);
        printf("Cidade: %s\n", carta2.cidade);
        printf("População: %d\n", carta2.populacao);
        printf("Área: %.2f km²\n", carta2.area);
        printf("PIB R$: %.2f\n", carta2.pib);
        printf("Pontos turísticos: %d\n", carta2.pontosturisticos);
        printf("Densidade Populacional: %.2f Habitantes por Km²\n", carta2.densidade);
        printf("PIB per Capita R$: %.2f\n", carta2.pibpercapita);

    // NIVEL MESTRE  
        //Calcúlo de Super Poder            
       printf("\n===== Bônus! SUPER PODER =====\n");     
       float superpoder1 = (carta1.populacao + carta1.area + carta1.pib + carta1.pontosturisticos + carta1.pibpercapita) / carta1.densidade;
       float superpoder2 = (carta2.populacao + carta2.area + carta2.pib + carta2.pontosturisticos + carta2.pibpercapita) / carta2.densidade;
       
       printf("O valor do Super Poder da carta 1 é: %.2f\n", superpoder1);
       printf("O valor do Super Poder da carta 2 é: %.2f\n", superpoder2);

        //Comparação das cartas
        printf("\n===== Comparação das cartas - Resultado 1 = Primeira cidade ganhou - Resultado 0 = Segunda cidade ganhou =====\n");
        printf("População:%d\n", carta1.populacao > carta2.populacao);
        printf("Área:%d\n", carta1.area > carta2.area);
        printf("PIB:%d\n", carta1.pib > carta2.pib);
        printf("Pontos Turísticos:%d\n", carta1.pontosturisticos > carta2.pontosturisticos);
        printf("Densidade Populacional:%d\n", carta1.densidade > carta2.densidade);
        printf("PIB per Capita:%d\n", carta1.pibpercapita > carta2.pibpercapita);
        printf("Super Poder :%d\n", superpoder1 > superpoder2);

    return 0;
}

