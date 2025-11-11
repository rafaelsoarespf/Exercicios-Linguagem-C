#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa em C que leia um número e informe se ele é divisível por 2,
    por 3 ou por 5, ou se não é divisível por nenhum deles.
 */

int main(void) {
    int num; // declarando variáveis

    //leitura dos valores
    printf("Digite um numero: \n");
    scanf("%d", &num);


    //analisando valores e imprimindo os números divisíveis
    printf("--------------------------------------- \n");
    printf("Verificando...\n");
    printf("--------------------------------------- \n\n");

    num % 2 == 0? printf("Numero divisivel por 2\n") : printf("Numero NAO divisivel por 2\n");
    num % 3 == 0? printf("Numero divisivel por 3\n") : printf("Numero NAO divisivel por 3\n");
    num % 5 == 0? printf("Numero divisivel por 5") : printf("Numero NAO divisivel por 5");

    return 0;
}