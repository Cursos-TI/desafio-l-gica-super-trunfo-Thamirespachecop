#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
int opcao;
// variáveis Cartas 1
     char estado1[50];
     char codigo1[20];
     char cidade1[50];
     unsigned int populacao1;
     float area1;
     float pib1;
     int ponto1;
     float densidade1;
     float percapita1;


// variáveis Cartas 2
     char estado2[50];
     char codigo2[20];
     char cidade2[50];
     unsigned int populacao2;
     float area2;
     float pib2;
     int ponto2;
     float densidade2;
     float percapita2;

    

    // Cadastro das Cartas:
    printf("Seja bem vindo! Insira os dados da carta 1\n");

  printf("Digite uma letra de A a H que represente o estado da carta:\n");
  scanf(" %s", estado1);

  printf("Digite o código da carta de 01 a 04:\n");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade:\n");
  getchar();
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;
  //scanf(" %s", cidade1);

  printf("Digite a população da cidade:\n");
  scanf(" %u", &populacao1);

  printf("Digite a área da cidade:\n");
  scanf(" %f", &area1);

  printf("Digite o PIB da cidade:\n");
  scanf(" %f", &pib1);

  printf("Digite a quantidade de pontos turísticos da cidade:\n");
  scanf(" %d", &ponto1);

   //Dados da Carta 2

  printf("Pronto, agora insira os dados da carta 2\n");

  printf("Digite uma letra de A a H que represente o estado da carta:\n");
  scanf(" %s", estado2);

  printf("Digite o código da carta de 01 a 04:\n");
  scanf(" %s", codigo2);

  printf("Digite o Nome da cidade:\n");
  getchar();
  fgets(cidade2, sizeof(cidade2), stdin);
  cidade2[strcspn(cidade2, "\n")] = '\0';

  printf("Digite a população da cidade:\n");
  scanf(" %u", &populacao2);

  printf("Digite a área da cidade:\n");
  scanf(" %f", &area2);

  printf("Digite o PIB da cidade:\n");
  scanf(" %f", &pib2);

  printf("Digite a quantidade de pontos turísticos da cidade:\n");
  scanf(" %d", &ponto2);

  //Cálculo de Densidade e PIB
    densidade1 = (float)populacao1 / area1;
    percapita1 = pib1 / (float)populacao1;

    densidade2 = populacao2 / area2;
    percapita2 = (float)pib2 / populacao2;
    
    printf("Escolha um tributo pra comparar as cartas: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade demográfica \n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if(populacao1 > populacao2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: População\n");
            printf("Carta 1 - %u, Carta 2 - %u\n", populacao1, populacao2);
            printf("### Carta 1 Venceu! ###\n");
        } else if(populacao1 < populacao2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: População\n");
            printf("Carta 1 - %u, Carta 2 - %u\n", populacao1, populacao2);
            printf("### Carta 2 Venceu! ###\n");
        } else{
            printf("### Houve um Empate! ###");
        }
        break;
    case 2:
        if(area1 > area2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: Área\n");
            printf("Carta 1 - %f, Carta 2 - %f\n", area1, area2);
            printf("### Carta 1 Venceu! ###\n");
        } else if(area1 < area2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: Área\n");
            printf("Carta 1 - %f, Carta 2 - %f\n", area1, area2);
            printf("### Carta 2 Venceu! ###\n");
        } else{
            printf("### Houve um Empate! ###");
        }
        break;    
    case 3:
        if(pib1 > pib2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: PIB\n");
            printf("Carta 1 - %f, Carta 2 - %f\n", pib1, pib2);
            printf("### Carta 1 Venceu! ###\n");
        } else if(pib1 < pib2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: PIB\n");
            printf("Carta 1 - %f, Carta 2 - %f\n", pib1, pib2);
            printf("### Carta 2 Venceu! ###\n");
        } else{
            printf("### Houve um Empate! ###");
        }
        break; 
    case 4:
        if(ponto1 > ponto2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: Pontos turísticos\n");
            printf("Carta 1 - %d, Carta 2 - %d\n", ponto1, ponto2);
            printf("### Carta 1 Venceu! ###\n");
        } else if(ponto1 < ponto2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: Pontos turísticos\n");
            printf("Carta 1 - %d, Carta 2 - %d\n", ponto1, ponto2);
            printf("### Carta 2 Venceu! ###\n");
        } else{
            printf("### Houve um Empate! ###");
        }
        break; 
    case 5:
        if(densidade1 < densidade2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: Densidade demográfica\n");
            printf("Carta 1 - %f, Carta 2 - %f\n", densidade1, densidade2);
            printf("### Carta 1 Venceu! ###\n");
        } else if(densidade1 > densidade2){
            printf("%s - %s\n", cidade1, cidade2);
            printf("Atributo: Densidade demográfica\n");
            printf("Carta 1 - %f, Carta 2 - %f\n", densidade1, densidade2);
            printf("### Carta 2 Venceu! ###\n");
        } else{
            printf("### Houve um Empate! ###");
        }
        break;     
    
    default:
    printf("Opção inválida\n");
        break;
    }

    return 0;
}
