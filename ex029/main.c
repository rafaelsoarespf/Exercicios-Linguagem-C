#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int quantFuncionarios;
	float salarioFuncionario, mediaSalario,  maiorSalario=-1, menorSalario=999999; // declarando variáveis

	printf("Digite a quantidade de funcionarios: ");
	scanf("%d", &quantFuncionarios);

	for(int i=0; i < quantFuncionarios; i++){
		printf("Digite o salario do funcionario %d: ", i+1);
		scanf("%f", &salarioFuncionario);
		maiorSalario < salarioFuncionario ? maiorSalario = salarioFuncionario : 0;
		menorSalario > salarioFuncionario ? menorSalario = salarioFuncionario : 0;
		mediaSalario += salarioFuncionario;
	}
	mediaSalario = mediaSalario / quantFuncionarios;
	printf("A media dos salarios dos funcionarios e %.2f \n", mediaSalario);
	printf("O maior salario foi de %.2f \n", maiorSalario);
	printf("O menor salario foi de %.2f", menorSalario);
	return 0;
}