#include <stdio.h>

int main(){

int numero1 = 10, numero2 = 3, resultado1, resultado2;

if(numero1 < numero2){
    printf("Numero1 e menor que Numero2\n\n");
    
}

resultado1 = numero1 % 2;
printf("Resultado1 e igual a: %d\n", resultado1);

if(resultado1 != 0){
    printf("O numero e impar\n\n");
} else {
    printf("O numero e par\n\n");
}

resultado2 = numero2 % 2;
printf("Resultado2 e igual a: %d\n", resultado2);

if(resultado2 == 0){
    printf("O numero e par");
} else {
    printf("O numero e impar\n");
}

}