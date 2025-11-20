/*Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
 *dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
 *equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
 *formam um triângulo”.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a,b,c; // declarando variável - notas e média

    //leitura das notas
    printf("Digite a medida do lado 1 do triangulo:");
    scanf("%f", &a);
    printf("Digite a medida do lado 2 do triangulo:");
    scanf("%f", &b);
    printf("Digite a medida do lado 3 do triangulo:");
    scanf("%f", &c);

    //imprimindo resultados
    printf("--------------------------------------- \n");
    printf("Calculando...\n");
    printf("--------------------------------------- \n");

    if( a >= b + c || b >= c + a || c >= b + a ){
        printf("Os pontos a, b e c NAO PODEM formar um triangulo!!!\n");
    }else{
        printf("Os pontos a, b e c PODEM formar um triangulo!!!\n");

        if( a == b && a == c){
            printf("Triangulo EQUILATERO");
        }else if( a == b || a == c || b == c ){
            printf("Triangulo ISOCELES");
        }else{
            printf("Triangulo ESCALENO");
        }
    }
    return 0;
}