#include <stdio.h>

int main(){

int a = -10;
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
  printf("Pelo menos uma (ou ambas) sao maior que zero, portanto e verdadeira.\n");
}else{
  printf("Ambas expressões sao menor que zero, sendo falsas.\n");
}
}