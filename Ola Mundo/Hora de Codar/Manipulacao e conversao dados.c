#include <stdio.h>

int main(){
//CONVERSAO IMPLICITA

int a = 10;
int b = 3;
int resultado1 = a/b;
float resultado2 = a/b;

printf("Resultado1: %d\n", resultado1);
printf("Resultado2: %f\n", resultado2);

//note que o resultado não expressou o valor correto da operação

//CONVERSAO EXPLICITA

int c = 10;
int d = 3;
float resultado3 = (float) a/b;

printf("Resultado3: %f\n", resultado3);

//note, que usando o "casting" (float), é possivel obter o resultado de forma precisa
}

