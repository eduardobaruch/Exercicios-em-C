#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale>

float pot (float a, float b);
float div (float a, float b);
float mult (float a, float b);
float sub (float a, float b);
float soma (float a, float b);

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	// Declaração de Variaveis
	float var1, var2;
	char operacao;
	float resultado;
	int opc = 0;
	
	while (opc != 1) {
	
		// Escolha da Operação
		printf("Selecione a operacao a ser realizada \n\n1.Soma(+) (var1 + var2) \n2.Subtracao(-) (var1 - var2)");
		printf("\n3.Divisao(/) (var1 / var2) \n4.Multiplicacao(*) (var1 * var2) \n5.Potencia(^) (var1 ^ var2) \n6.Raiz Quadrada r(var)\n");
	
		printf("\nDigite o valor da variavel 1: ");
		scanf("%f", &var1);
	
		printf("\nDigite a operação (+, -, *, /, ^, r): ");
		operacao = getche();
	
		if (operacao != 'r') {
			printf("\n\nDigite o valor da variavel 2: ");
			scanf("%f", &var2);
		}
	
	
		// Selecão da operação
		switch (operacao)
		{
			// Soma
			case '+':
				printf("\nO resultado da soma é: %.2f", soma(var1,var2));
				break;
			
			// Subtração
			case '-':
				printf("\n O resultado da subtracao eh : %.2f\n", sub(var1, var2));
				break;
				
			// Divisão	
			case '/':
				// Nao permitir divisÃ£o por zero
				if(var2 == 0) {
					printf("\nNao e permitido a divisao por zero! \n");
					break;
				} else {
					printf("\n O resultado da divisao eh : %.2f\n", div(var1, var2));
					break;
			}
				
			// Multiplicação
			case '*':
				printf("\n O resultado da multiplicacao eh : %.2f\n", mult(var1,var2));
				break;
				
			// Potenciação
				// Nao permitir expoentes negativos em operaÃ§Ãµes de potenciaÃ§Ã£o
				if(var2 < 0){
					printf("\nNao e permitido a potenciacao com expoentes negativos! \n");
					break;
				} else {	
					resultado = pot(var1, var2);
					printf("\n O resultado da potenciacao eh : %.2f \n", resultado);
					break;
				}
				
			// Raiz Quadrada
			case 'r':
				// Nao permitir raiz de numeros negativos ou iguais a zero
				if(var1 <= 0) {
					printf("\nNao e permitido ter a raiz de numeros negativos ou iguais a zero! \n");
					break;
				} else {
					printf("\n A raiz quadrada da %.2f eh = %.2f\n", var1, sqrt(var1));
					break;
			}
			
			default:
					printf("\n Operacao invalida!! \n");
		}
		
		printf("\n\nVoce deseja sair? 1-Sim ou 2-Nao: ");
		scanf("%d", &opc);
		system("cls");
	}
}

float soma (float a, float b)
{
	return a+b;
}

float sub (float a, float b){
	return a-b;
}

float mult(float a, float b){
	return a*b;
}

float div(float a, float b){
	return a/b;
}


// Algoritmo de PotenciaÃ§Ã£o
float pot(float a, float b)
{
	float resultado = a;
	
	for(int i = 1; i < b; i++)
	{
		resultado *= a;
	}
	
	return resultado;
}
