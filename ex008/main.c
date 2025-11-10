#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em C que lê 5 números inteiros, um por vez.
Conte quantos destes valores são negativos e quantos são positivos.
Ao final, imprima na tela a quantidade de números negativos e positivos.
 */

int main(void) {

    int num1, num2, num3, num4, num5, positivo = 0, negativo= 0; // declarando variáveis
    int i; // declarando contador

    //leitura dos valores
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &num3);

    printf("Digite o quarto numero: \n");
    scanf("%d", &num4);

    printf("Digite o quinto numero: \n");
    scanf("%d", &num5);

    //analisando valores positivos e negativos
    num1 > 0 ? positivo++ : num1 < 0 ? negativo++ : 0;
    num2 > 0 ? positivo++ : num2 < 0 ? negativo++ : 0;
    num3 > 0 ? positivo++ : num3 < 0 ? negativo++ : 0;
    num4 > 0 ? positivo++ : num4 < 0 ? negativo++ : 0;
    num5 > 0 ? positivo++ : num5 < 0 ? negativo++ : 0;

    //imprimindo o resultado
    printf("--------------------------------------- \n");
    printf("Verificando valores...\n");
    printf("--------------------------------------- \n\n");
    printf(" Foi detectado %d valores POSITIVOS.\n", positivo);
    printf(" Foi detectado %d valores NEGATIVOS.\n", negativo);

    return 0;
}