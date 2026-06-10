#include <stdio.h>

void main(){

    int numero1, numero2, numero3, numero4;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com um numero1: \n");
    scanf("%d", &numero1);
    printf("Entre com um numero2: \n");
    scanf("%d", &numero2);

    //Logica de soma
    soma = numero1 + numero2;
    printf("A soma dos numeros corresponde a: %d \n", soma);

    //Logica de subtração
    subtracao = numero1 - numero2;
    printf("A subtracao dos numeros corresponde a: %d \n", subtracao);

    //Logica de divisao
    divisao = numero2 / numero1;
    printf("A divisao dos numeros corresponde a: %d \n", divisao);

    //Logica de multiplicação
    multiplicacao = numero2 * numero1;
    printf("A multiplicacao dos numeros corresponde a: %d \n\n", multiplicacao);

    // LOGICA ATRIBUIÇÃO ****
    
    printf("Logica de Atribuicao\n\n");

    soma += soma + 30;
    printf("O resultado de soma e: %d\n", soma);

    subtracao -= subtracao + 30;
    printf("O resultado de subtracao e: %d\n", subtracao);

    divisao /= 2;
    printf("O resultado de divisao e: %d\n", divisao);

    multiplicacao *= multiplicacao / 100;
    printf("O resultado de multiplicacao e: %d\n\n", multiplicacao);


    // LOGICA INCREMENTO E DECREMENTO

    /*  pre incremento ++a
        incremento ++
        pos incremento a++
        
        pre decremento --a
        decremento --
        pos decremento a--*/

    // numero1 += 1;
    // numero1 = numero1 + 1;    
    printf("Antes incremento: %d\n", numero1);
    numero1 ++;
    printf("Apos incremento: %d\n", numero1);

    // numero1 -+ 1;
    // numero1 = numero1 - 1;

    numero1 --;
    printf("Apos decremento: %d\n\n", numero1);

    /*  pre/pos incremento
        */

    printf("LOGICA PRE/POS INCREMENTO\n\n");

    printf("Entre com um numero3: \n");
    scanf("%d", &numero3);
    printf("Entre com um numero4: \n");
    scanf("%d", &numero4);

    int resultado1 = 1;    
    printf("Antes pre incremento | resultado: %d e numero3: %d\n\n", resultado1, numero3);
    resultado1 = ++numero3;
    printf("Apos pre incremento | resultado: %d e numero3: %d\n", resultado1, numero3);

    resultado1 = numero3++;
    printf("Apos pos incremento | resultado: %d e numero3: %d\n\n", resultado1, numero3);

    /* pre/pos decremento
    */
    int resultado2 = 1;    
    printf("Antes pre decremento | resultado: %d e numero4: %d\n\n", resultado2, numero4);
    resultado2 = numero4;
    --numero4;
    printf("Apos pre incremento | resultado: %d e numero4: %d\n", resultado2, numero4);

    resultado2 = numero4;
    numero4--;
    printf("Apos pos decremento | resultado: %d e numero4: %d\n", resultado2, numero4);


}
