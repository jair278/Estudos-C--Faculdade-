#include <stdio.h>

int main(){

float temperatura, umidade;
unsigned long int estoque;

printf("Entre com a temperatura: \n");
scanf("%f", &temperatura);

printf("Entre com a umidade: \n");
scanf("%f", &umidade);

printf("Entre com o estoque: \n");
scanf("%u", &estoque);

if(temperatura > 30){
    printf("\nA temperatura esta alta\n\n");
} else {
    printf("A temperatura esta dentro dos parametros\n\n");
}

if(umidade <= 40){
    printf("A umidade esta baixa\n\n");
} else {
    printf("A umidade esta dentro dos paramentros\n\n");
}

if(estoque != 0){
    printf("O estoque esta positivo\n\n");
} else {
    printf("Estamos sem estoque\n\n");
}


}