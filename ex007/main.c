#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
 */

int main(void) {

    float valor; // declarando variável horas
    float valor2; // declarando variável minutos
    float valor3; // declarando variável segundos
    float maiorvalor;
    float menorvalor;

    //leitura dos valores
    printf("Digite um valor: \n");
    scanf("%f", &valor);
    maiorvalor = valor;
    menorvalor = valor;

    printf("Digite um segundo valor: \n");
    scanf("%f", &valor2);

    printf("Digite um terceiro valor: \n");
    scanf("%f", &valor3);

    //calculando valor
    //verificando valor2
    if (maiorvalor < valor2) {
        maiorvalor = valor2;
    }else {
        menorvalor = valor2;
    }
    //verificando valor3
    if (maiorvalor < valor3) {
        maiorvalor = valor3;
    }else if (menorvalor > valor3) {
        menorvalor = valor3;
    }

    printf("--------------------------------------- \n");
    printf("Analisando...\n");
    printf("--------------------------------------- \n\n");
    printf(" Menor valor: %f \n", menorvalor);
    printf(" Maior valor: %f \n", maiorvalor);

    return 0;
}