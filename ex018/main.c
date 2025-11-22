#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int senha; // declarando variável - senha que recebe 123456

	//leitura da SENHA
	while(senha != 123456){
		printf("Digite a senha: ");
		scanf("%d", &senha);
		senha != 123456 ? printf("Senha Invalida\n") : printf("Acesso Permitido");
	}

	return 0;
}