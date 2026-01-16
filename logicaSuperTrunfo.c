#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

// Definição das variáveis para armazenar as propriedades das cidades
int opcao1, opcao2;
int resultado1, resultado2;
char atributo1[30];
char atributo2[30];
float somacarta1, somacarta2;

float valor1_atributo1, valor2_atributo1;
float valor1_atributo2, valor2_atributo2;

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
    
    printf("Escolha o primeiro atributo pra comparar as cartas: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade demográfica \n");

    printf("Escolha o primeira atributo: \n");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
       printf("Você escolheu o atributo - População\n");
       strcpy(atributo1, "População");
       valor1_atributo1 = populacao1;
       valor2_atributo1 = populacao2;
       resultado1 = populacao1 > populacao2 ? 1 : 0;
       break;
    case 2:
       printf("Você escolheu o atributo - Área\n");
       strcpy(atributo1, "Área");
       valor1_atributo1 = area1;
       valor2_atributo1 = area2;
       resultado1 = area1 > area2 ? 1 : 0;
       break;    
    case 3:
       printf("Você escolheu o atributo - PIB\n");
       strcpy(atributo1, "PIB");
       valor1_atributo1 = pib1;
       valor2_atributo1 = pib2;
       resultado1 = pib1 > pib2 ? 1 : 0;
       break; 
    case 4:
       printf("Você escolheu o atributo - Número Pontos turísticos\n");
       strcpy(atributo1, "Número de pontos turísticos");
       valor1_atributo1 = ponto1;
       valor2_atributo1 = ponto2;
       resultado1 = ponto1 > ponto2 ? 1 : 0;
       break; 
    case 5:
       printf("Você escolheu o atributo - Densidade demográfica\n");
       strcpy(atributo1, "Densidade demográfica");
       valor1_atributo1 = densidade1;
       valor2_atributo1 = densidade2;
       resultado1 = densidade1 < densidade2 ? 1 : 0;
       break;     
    
    default:
    printf("Opção inválida\n");
        break;
    }

    printf("Escolha o segundo atributo pra comparar as cartas: \n");
    printf("ATENÇÃO: Você deve escolher um atributo diferente do primeiro\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade demográfica \n");

    printf("Escolha o segundo atributo: \n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
      printf("Você escolheu o mesmo atributo!\n");
    } else{
       switch (opcao2)
    {
    case 1:
       printf("Você escolheu o atributo - População\n");
       strcpy(atributo2, "População");
       valor1_atributo2 = populacao1;
       valor2_atributo2 = populacao2;
       resultado2 = populacao1 > populacao2 ? 1 : 0;
       break;
    case 2:
       printf("Você escolheu o atributo - Área\n");
       strcpy(atributo2, "Área");
       valor1_atributo2 = area1;
       valor2_atributo2 = area2;
       resultado2 = area1 > area2 ? 1 : 0;
       break;    
    case 3:
       printf("Você escolheu o atributo - PIB\n");
        strcpy(atributo2, "PIB");
        valor1_atributo2 = pib1;
        valor2_atributo2 = pib2;
        resultado2 = pib1 > pib2 ? 1 : 0;
       break; 
    case 4:
       printf("Você escolheu o atributo - Número Pontos turísticos\n");
        strcpy(atributo2, "Número de pontos turísticos");
        valor1_atributo2 = ponto1;
       valor2_atributo2 = ponto2;
       resultado2 = ponto1 > ponto2 ? 1 : 0;
       break; 
    case 5:
       printf("Você escolheu o atributo - Densidade demográfica\n");
        strcpy(atributo2, "Densidade demográfica");
        valor1_atributo2 = densidade1;
        valor2_atributo2 = densidade2;
       resultado2 = densidade1 < densidade2 ? 1 : 0;
       break;     
    
    default:
    printf("Opção inválida\n");
        break;
    }
    }
    

    somacarta1 = valor1_atributo1 + valor1_atributo2;
    somacarta2 = valor2_atributo1 + valor2_atributo2;

    
      printf(" Carta 1: %s \n", cidade1);
      printf(" Carta 2: %s \n", cidade2);
      printf(" Atributos escolhidos:%s, %s", atributo1, atributo2);
      printf("Carta 1:%.2f , %.2f\n", valor1_atributo1, valor1_atributo2);
      printf("Carta 2:%.2f , %.2f\n", valor2_atributo1, valor2_atributo2);
      printf("A soma dos atributos da carta 1 é %.2f e carta 2 %.2f\n", somacarta1, somacarta2);
      
      if (somacarta1 > somacarta2)
      {
       printf("Carta 1 Venceu!\n");
      }else if(somacarta1 < somacarta2){
         printf("Carta 2 Venceu!\n");
      } else{
         printf("Empate!\n");
      }
      
    

    return 0;
}
