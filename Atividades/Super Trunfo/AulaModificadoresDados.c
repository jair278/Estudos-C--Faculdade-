#include <stdio.h>

int main() {

//Dados do produto    
char produtoA[20] = "Ferro";
char produtoB[20] = "Cobre";
char produtoC[20] = "Cobalto";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2356;
unsigned int estoqueC = 153;

float valorA = 1.56;
float valorB = 49.51;
float valorC = 2463.10;

unsigned int estoqueMinA = 500;
unsigned int estoqueMinB = 2500;
unsigned int estoqueMinC = 153;

float valorTotalA;
float valorTotalB;
float valorTotalC;

int resultadoA, resultadoB, resultadoC;

//Informações dos Produtos
printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);
printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoC, estoqueC, valorC);

//Comparação dos protutos
resultadoA = estoqueA > estoqueMinA;
resultadoB = estoqueB > estoqueMinB;
resultadoC = estoqueC > estoqueMinC;

printf("O %s tem estoque minimo %d \n", produtoA, resultadoA);
printf("O %s tem estoque minimo %d \n", produtoB, resultadoB);
printf("O %s tem estoque minimo %d \n", produtoC, resultadoC);

//Comparação de Valores
printf("O valor total de %s (R$ %.2f) e maior que valor total de %s (R$ %.2f), que é maior que o valor total de %s (R$ %.2f)", produtoC, estoqueC * valorC, produtoB, estoqueB * valorB, produtoA, estoqueA * valorA);


}