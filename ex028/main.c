#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num; // declarando variáveis

	printf("Digite um  numero inteiro: ");
	scanf("%d", &num);

	for(int i = 2; i < num; i++){
		if(num % i == 0 ){
			printf("Esse numero e divisivel por %d!!! Ele nao e primo!", i);
			return 0;
		}
	}
	printf("Numero primo!!!");
}