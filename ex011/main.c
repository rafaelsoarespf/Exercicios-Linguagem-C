/* O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa
(em kg) pela altura (h em metros) elevada ao quadrado (IMC= m/h²). Escreva um
programa que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa
em que o indivíduo se enquadra */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float peso, altura, imc; // declarando variáveis

    //leitura do peso
    printf("Digite o peso em kg:");
    scanf("%f", &peso);

    //leitura da altura
    printf("Digite a altura en metros:");
    scanf("%f", &altura);

    //calculo
    imc = peso / (altura*altura);

    printf("--------------------------------------- \n");
    printf("Analizando...\n");
    printf("--------------------------------------- \n");

    imc < 18.5 ? printf("Seu IMC e de %.2f. Voce esta ABAIXO DO PESO!!", imc) :
        imc < 25 ?  printf("Seu IMC e de %.2f. Voce esta com PESO NORMAL!!", imc) :
                imc < 30 ?  printf("Seu IMC e de %.2f. Voce esta com SOBREPESO!!", imc) :
                imc < 35 ?  printf("Seu IMC e de %.2f. Voce esta com OBESIDADE DE GRAU 1!!", imc) :
                    imc < 40 ?  printf("Seu IMC e de %.2f. Voce esta com OBESIDADE DE GRAU 2!!", imc) :
                        printf("Seu IMC e de %.2f. Voce esta com OBESIDADE DE GRAU 3!!", imc);

    return 0;
}