#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
/* Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados
 e printf para exibir as informações.*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char EstadoA[20] = "Para";
  char EstadoB[20] = "Tocantins";

  char CodigoCartaA1[20] = "A01";
  char CodigoCartaB1[20] = "B01";

  char NomeCidadeA01[20] = "Uruara";
  char NomeCidadeB01[25] = "Luzinopolis";

  int PopulacaoA01 = 43110;
  int PopulacaoB01 = 24654;

  float AreaA01 = 10791.54;
  float AreaB01 = 282;

  float PibA01 = 110000000.00;
  float PibB01 = 58000000.00;

  int TurismoA01 = 16;
  int TurismoB01 = 12;
  
  char confirmacao[10];

  float Densidade1, Densidade2;
  float PibC1, PibC2;


  // Área para entrada de dados
  printf("Digite S para mostrar as cartas: ");
  scanf("%s", &confirmacao);
  //Confirmação apenas "estetica", visto que não temos ainda estrutura de decisão no codigo. Serve apenas para iniciar o programa

  Densidade1 = (PopulacaoA01/AreaA01);
  Densidade2 = (PopulacaoB01/AreaB01);
  PibC1 = (PibA01/PopulacaoA01);
  PibC2 = (PibB01/PopulacaoB01);


  // Área para exibição dos dados da cidade
  printf("Cartas: \n\n");

  printf("Codigo: %s\n", CodigoCartaA1);
  printf("Estado: %s\n", EstadoA);
  printf("Cidade: %s\n", NomeCidadeA01);
  printf("Populacao: %d habitantes\n", PopulacaoA01);
  printf("Area em Km2: %.2f Km²\n", AreaA01);
  printf("PIB: %.2f bilhoes de reais\n", PibA01);
  printf("Pontos Turisticos: %d\n", TurismoA01);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
  printf("PIB per Capita: %.2f reais\n\n", PibC1);

  printf("Codigo: %s\n", CodigoCartaB1);
  printf("Estado: %s\n", EstadoB);
  printf("Cidade: %s\n", NomeCidadeB01);
  printf("Populacao: %d habitantes\n", PopulacaoB01);
  printf("Area em Km2: %.2f Km²\n", AreaB01);
  printf("PIB: %.2f milhoes de reais\n", PibB01);
  printf("Pontos Turisticos: %d\n", TurismoB01);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
  printf("PIB per Capita: %.2f reais\n\n", PibC2);

  return 0;
} 

