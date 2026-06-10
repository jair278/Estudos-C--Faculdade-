#include <stdio.h>

int main(){

    int idade = 33;
    float peso = 56.5;
    double velocidade = 300.50;
    char letra = 'J';
    char nome[9] = "Douglas";
    int telefone;
    float altura;
    char nome_completo[30];


   /* printf("Olá, Mundo!\n");

    return 0;
    */
    
    printf("A minha idade é de: %d anos\n", idade);
    printf("Meu peso atual é de: %.2f Kg.\n", peso);
    printf("A velocidade de um guepardo é de aproximadamente %.3f km/h.\n", velocidade);
    printf("A primeira letra do meu nome é %c e meu sobrenome é %s.\n", letra, nome);

    printf("Qual o seu numero de telefone? \n");
    scanf("%d", &telefone);
    printf("Meu telefone é %d\n", telefone);
    printf("Qual a sua altura? ");
    scanf("%f", &altura);
    printf("Minha altura é de %.2fm\n", altura);
    printf("Qual é o seu nome completo? ");
    scanf("%s", nome_completo);
    printf("Meu nome completo é %s\n", nome_completo);

    return 0;
    
}