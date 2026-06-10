#include <stdio.h>


void main(){
    float matematica, logica, seguranca_info, media;
    
    printf("Insira a nota de matematica: \n");
    scanf("%f", &matematica);
    
    printf("Insira a nota de logica: \n");
    scanf("%f", &logica);
    
    printf("Insira a nota de Seguranca de informacao: \n");
    scanf("%f", &seguranca_info);
   
    printf("Notas do Aluno: \n\n");
    printf("Nota Matematica: %.2f\n", matematica);
    printf("Nota Logica de Programacao: %.2f\n", logica);
    printf("Nota Seguranca de Informacao: %.2f\n\n", seguranca_info);

    printf("Media de notas do Aluno: \n\n");

    media = (matematica + logica + seguranca_info) /3;
    
    printf("A media do aluno e: %.2f", media);

}