/*Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a
partir de três notas. Faça um programa que leia as notas e o tipo da média escolhida
 pelo usuário e calcule a apresente a média:

Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4). */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float nota1,nota2,nota3, media; // declarando variável - notas e média
    char opcoes;

    //leitura das notas
    printf("Digite o valor da nota 1:");
    scanf("%f", &nota1);
    printf("Digite o valor da nota 2:");
    scanf("%f", &nota2);
    printf("Digite o valor da nota 3:");
    scanf("%f", &nota3);

    do{ //leitura da opcoes - a para aritimetico e p para ponderado
        printf("Escolha como deseja calcular as notas: \n");
        printf(" [a] - Aritmetica \n");
        printf(" [p] - Ponderada (pesos: 3, 3 e 4 respectivamente)\n");
        scanf(" %c", &opcoes);

        switch(opcoes){
            case 'a': // calculo aritmético das notas
                media = (nota1 + nota2 + nota3) / 3;
                break;
            case 'p': // calculo ponderado das notas
                media = (nota1*3 + nota2*3 + nota3*4)/10;
                break;
            default:
                printf("Opcao invalida!!!\n");
        }
    }while (opcoes != 'a' && opcoes != 'p');

    //imprimindo resultados
    printf("--------------------------------------- \n");
    printf("Calculando...\n");
    printf("--------------------------------------- \n");
    printf("Media obtida: %.2f!!!", media);
    return 0;
}