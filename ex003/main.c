#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
    porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
    Assuma que a conta será dividida igualmente.
 */

int main(void) {

    float despesa; // declarando variavel despesa
    float gorjeta; //declarando variavel gorjeta
    float valorTotalPorPessoa; // declarando variavel valorTotalPorPessoa
    int numPessoas; //declarando variavel numPessoas(numero de pessoas para dividr a conta)

    //leitura do valor da despesa
    printf("Digite o valor da conta: \n");
    scanf("%f", &despesa);

    //leitura do valor da gorjeta
    printf("Digite a porcentagem da gorjeta: \n");
    scanf("%f", &gorjeta);

    //leitura do valor da pessoas
    printf("Digite o numero de pessoas para dividir a conta: \n");
    scanf("%d", &numPessoas);


    //calculando valor total por pessoa
    valorTotalPorPessoa = despesa * (1+gorjeta/100);
    valorTotalPorPessoa = valorTotalPorPessoa / numPessoas;

    printf("--------------------------------------- \n");
    printf("Calculando...\n");
    printf("--------------------------------------- \n");
    printf("Cada pessoa deve pagar: R$ %.2f\n", valorTotalPorPessoa);


    return 0;
}