#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[20];

    printf("Digite o nome do aluno: \n");
    scanf("%s", &nome);

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua matricula: \n");
    scanf("%d", &matricula);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Matricula do Aluno: %d \n", matricula);
    printf("Nome do Aluno: %s \n", nome);
    printf("Altura do Aluno: %.2f metros \n", altura);
    printf("Idade do Aluno: %d anos de idade\n", idade);

    return 0;


}