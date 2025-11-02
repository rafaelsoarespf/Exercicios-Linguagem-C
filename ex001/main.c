#include <stdio.h>
#include <stdlib.h>

/*
    Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
    para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
    “a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
    estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
 */

int main(void) {


    int a; //declarando variável a
    int b; //declarando variável b
    int aux;

    //leitura do valor de a
    printf("Digite o valor da variavel a: \n");
    scanf("%d", &a);

    //leitura do valor de b
    printf("Digite o valor da variavel b: \n");
    scanf("%d", &b);

    //invertendo os valores
    aux = a;
    a = b;
    b = aux;

    printf("--------------------------------------- \n");
    printf("Invertendo os valores...\n");
    printf("--------------------------------------- \n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}