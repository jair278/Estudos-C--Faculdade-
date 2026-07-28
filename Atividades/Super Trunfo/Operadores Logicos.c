#include <stdio.h>

int main(){
/*
int a = 10;
int b = -5;

// Estrutura do AND / E (&&) 
if(a > 0 && b >0){
  printf("Ambas sao maior que zero, sendo assim resultado verdadeiro.\n");
}
  else{
  printf("Ao menos uma ou nenhuma e maior que zero, portanto o resultado e falso.\n");
}

// Estrutura do OR / OU (||)
if(a >0 || b >0){
  printf("Pelo menos uma (ou ambas) sao maior que zero, portanto e verdadeira.\n\n");
}else{
  printf("Ambas expressões sao menor que zero, sendo falsas.\n\n");
}


//Estrutura do NOT / !
if(!a > 0){
  printf("A variavel a e positiva\n");
}else{
  printf("A variavel a e negativa\n");
}
if(!b >0){
  printf("A variavel b e negativa\n");
}else{
  printf("A variavel b e positiva\n");
}

int c = 10;
int d = -20;
int e = 0;

if(c > 0 && d < 0 || e == 0){
  printf("A condicao e verdadeira\n");
}else{
  printf("A condicao e falsa\n");
}
*/
//c é maior que 0? verdadeiro
//d é menor que 0? verdadeiro
//verdadeiro && verdadeiro = verdadeiro
//e é igual a 0? verdadeiro
//verdadeiro ou verdadeiro = Verdadeiro

int idade = 16;
float altura = 1.71;

if(idade >= 18 && idade <= 30 && altura > 1.70){
  printf("Voce esta na faixa etaria e altura adequada");
}else{
  printf("Voce nao atende os requisitos");
}

//idade maior que 18? Falso
//idade menor que 30? verdadeiro
//falso && Verdadeiro = falso
//altura maior que 1.70? verdadeiro
//falso && verdadeiro = falso
}