#include <stdio.h>
#include <stdlib.h>


int main(){
float peso, altura, imc; 
int opcao;
char situacao;

	while(opcao != 4){
		printf("\n ::: Calculadora de IMC:::");
		printf("\n");
		printf("\n Digite a opcao desejada:\n1-Calcular IMC\n2-Tabela e Resultados IMC\n3-Formula matematica\n4-Sair\n");
		scanf("%i", &opcao);

		if(opcao == 1){
			system("clear");
			printf(":::CALCULADORA DE IMC:::");
				printf("\n Insira o peso: ");
				scanf("%f", &peso);
				printf("\nInsira a altura em separada por pontos (Ex. 1.33) : ");
				scanf("%f", &altura);
				imc = peso / (altura * altura);
				printf("\n Resultado: %.2f         %c\n", imc, situacao);	
		}

		else if(opcao == 2){
			system("clear");
			printf("\n  Faixa de Resultados\n ");
			printf("\nMenos do que 18,5     Abaixo do peso");
			printf("\nEntre 18,5 e 24,9     Peso normal");
			printf("\nEntre 25 e 29,        Sobrepeso");
			printf("\nEntre 30 e 34,9       Obesidade grau 1");
			printf("\nEntre 35 e 39,9       Obesidade grau 2");
			printf("\nAcima de 40           Obesidade grau 3\n");

		}

		else if(opcao ==3){
			printf("\nO IMC é calculado dividindo o peso pela altura elevada ao quadrado. \nPeso / (altura * altura)\n");
		}
	}

	
		printf("\n Obrigado!!!\n");
	

}
