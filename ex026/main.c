#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int tempoMeiaVida = 50; // tempo para perder metade da massa
    float massaGrama; // variavel - massa em grama
	  int segundos; // variável que recebe o tempo para massa se tornar menor que 0,05g
	  
	  printf("Digite a massa em grama: \n");
	  scanf("%f", &massaGrama);
	  
	  while(massaGrama >= 0.05 ){
		  massaGrama = massaGrama /2
		  segundos += tempoMeiaVida; 
	  }
	  
	  printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
	  printf("CALCULANDO...\n");
	  printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
	  
	  // verificando valor do dinheiro nos 30 dias
		printf("O tempo necessario para que a massa se torne menor que 0,05g e de %d segundos", segundos);

    return 0;
}