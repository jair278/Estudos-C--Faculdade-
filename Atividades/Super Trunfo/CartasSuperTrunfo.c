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

  unsigned long int PopulacaoA01 = 43110;
  unsigned long int PopulacaoB01 = 24654;

  float AreaA01 = 10791.54;
  float AreaB01 = 282;

  float PibA01 = 110000000.00;
  float PibB01 = 58000000.00;

  int TurismoA01 = 16;
  int TurismoB01 = 12;
  
  char confirmacao[10];

  float Densidade1, Densidade2, SuperPoder, SomaA01, SomaB01;
  float PibC1, PibC2;

  int Resultado, Comp_Populacao, Comp_Turismo, Comp_Area, Comp_PIBC, Comp_Densidade, Comp_PIB, Comp_SupPoder;

  // Área para entrada de dados
  printf("Digite S para mostrar as cartas: ");
  scanf("%s", &confirmacao);
  //Confirmação apenas "estetica", visto que não temos ainda estrutura de decisão no codigo. Serve apenas para iniciar o programa

  Densidade1 = (PopulacaoA01/AreaA01);
  Densidade2 = (PopulacaoB01/AreaB01);
  PibC1 = (PibA01/PopulacaoA01);
  PibC2 = (PibB01/PopulacaoB01);
  SuperPoder = SomaA01, SomaB01;
  SomaA01 = ((float)PopulacaoA01 + AreaA01 + PibA01 + TurismoA01 + (1/Densidade1) + PibC1);
  SomaB01 = ((float)PopulacaoB01 + AreaB01 + PibB01 + TurismoB01 + (1/Densidade2) + PibC2);

  //Comparação entre as duas cartas, e determinar qual tem maior valor

  Resultado = SomaA01 > SomaB01;


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
  printf("PIB per Capita: %.2f reais\n", PibC1);
  printf("Super Poder: %.2f \n\n", SomaA01);

  printf("Codigo: %s\n", CodigoCartaB1);
  printf("Estado: %s\n", EstadoB);
  printf("Cidade: %s\n", NomeCidadeB01);
  printf("Populacao: %d habitantes\n", PopulacaoB01);
  printf("Area em Km2: %.2f Km²\n", AreaB01);
  printf("PIB: %.2f milhoes de reais\n", PibB01);
  printf("Pontos Turisticos: %d\n", TurismoB01);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
  printf("PIB per Capita: %.2f reais\n", PibC2);
  printf("Super Poder: %.2f \n\n", SomaB01);

  printf("Deseja ver o resultado da comparacao entre as duas cartas? Digite S para SIM: ");
  scanf("%s", confirmacao);
  printf("ATENCAO: Para resultado 1 vence Carta A01 e para resultado 0 vence Carta B01\n");
  printf("Exceto, densidade, onde a carta com menor valor (resultado 0) vence\n\n");

  Comp_Populacao = PopulacaoA01 > PopulacaoB01;
  Comp_Area = AreaA01 > AreaB01;
  Comp_PIB = PibA01 > PibB01;
  Comp_Turismo = TurismoA01 > TurismoB01;
  Comp_Densidade = Densidade1 > Densidade2;
  Comp_PIBC = PibC1 > PibC2;
  Comp_SupPoder = SomaA01 > SomaB01;

  printf("Populacao: A carta A01 venceu = %d\n", Comp_Populacao);
  printf("Area: A carta A01 venceu = %d\n", Comp_Area);
  printf("PIB: A carta A01 venceu = %d\n", Comp_PIB);
  printf("Turismo: A carta A01 venceu = %d\n", Comp_Turismo);
  printf("Densidade: A carta A01 venceu = %d\n", Comp_Densidade);
  printf("PIB per Capita: A carta A01 venceu = %d\n", Comp_PIBC);
  printf("Super Poder: A carta A01 venceu = %d\n\n", Comp_SupPoder);
  printf("A carta vencedora e A01\n\n");

  //Inserção da estrutura de decisão para teste de comparação

  printf("LOGICA DE DECISAO\n\n");

  printf("Comparacao entre populacao\n\n\b");
if (PopulacaoA01 > PopulacaoB01){
  printf("A populacao da carta A01 (%u) e maior que a populacao da carta B01 (%u)\n\n", PopulacaoA01, PopulacaoB01);
}  else{
  printf("A populacao da carta B01 e maior que a populacao da carta A01\n\n");
}
  printf("Comparacao entre a soma de todos os atributos\n\n\b");
if (SomaA01 > SomaB01){
  printf("A Soma de todos os atributos da carta A01 (%.2f) e maior que a soma de todos os atributos de B01 (%.2f),\n portanto A01 e a carta vencedora!\n\n", SomaA01, SomaB01);
} else {
  printf("A Soma de todos os atributos da carta B01 (%.2f) e maior que a soma de todos os atributos de A01 (%.2f),\n portanto B01 e a carta vencedora!\n\n", SomaB01, SomaA01);
}

  return 0;
} 

