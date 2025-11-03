#include <stdio.h>
#include <stdlib.h>

/*
    Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
    como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
    Dólares.
 */

int main(void) {

    float valorEmReais; // declarando variável valor em reais
    float valorEmDolares; // declarando variável valor em dolares
    float valorDoDolar = 5.30; // declarando variável que corresponde ao valor do dolar


    //leitura do valor em reais
    printf("Valor de reais: \n");
    scanf("%f", &valorEmReais);


    //calculando valor
    valorEmDolares = valorEmReais / valorDoDolar;

    printf("--------------------------------------- \n");
    printf("Convertendo...\n");
    printf("--------------------------------------- \n\n");
    printf("Valor em dollar: U$ %.2f\n", valorEmDolares);

    return 0;
}