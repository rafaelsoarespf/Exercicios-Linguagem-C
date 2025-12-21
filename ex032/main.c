#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int  num=0, positivo=0, negativo=0;

    do{
	    printf("Digite um valor (Digite 0 para sair) : ");
	    scanf("%d", &num);
	    num == 0 ? printf("Saindo...\n") :
		    num > 0 ? positivo++ : negativo++;
    }while(num != 0);

	printf("Positivos: %d\n", positivo);
    printf("Negativos: %d\n", negativo);
    return 0;
}