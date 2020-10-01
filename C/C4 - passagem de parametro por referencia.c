#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void pot (float a, float b, float *resultado);
void div (float a, float b, float *resultado);
void mult (float a, float b, float *resultado);
void sub (float a, float b, float *resultado);
void soma (float a, float b, float *resultado);

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
				soma(var1, var2, &resultado);
				printf("\nO resultado da soma é: %.2f", resultado);
				break;
			
			// Subtração
			case '-':
				sub(var1, var2, &resultado);
				printf("\n O resultado da subtracao eh : %.2f\n", resultado);
				break;
				
			// Divisão	
			case '/':
				// Nao permitir divisÃ£o por zero
				if(var2 == 0) {
					printf("\nNao e permitido a divisao por zero! \n");
					break;
				} else {
					div(var1, var2, &resultado);
					printf("\n O resultado da divisao eh : %.2f\n", resultado);
					break;
			}
				
			// Multiplicação
			case '*':
				mult(var1, var2, &resultado);
				printf("\n O resultado da multiplicacao eh : %.2f\n", resultado);
				break;
				
			// Potenciação
			case '^':
				// Nao permitir expoentes negativos em operaÃ§Ãµes de potenciaÃ§Ã£o
				if(var2 < 0){
					printf("\nNao e permitido a potenciacao com expoentes negativos! \n");
					break;
				} else {	
					pot(var1, var2, &resultado);
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

void soma (float a, float b, float *res)
{
	*res = a+b;
}

void sub (float a, float b, float *resultado){
	*resultado = a-b;
}

void mult(float a, float b, float *resultado){
	*resultado = a*b;
}

void div(float a, float b, float *resultado){
	*resultado = a/b;
}

// Algoritmo de PotenciaÃ§Ã£o
void pot(float a, float b, float *resultado_r)
{
	float resultado = a;
	
	for(int i = 1; i < b; i++)
	{
		resultado *= a;
	}
	
	*resultado_r = resultado;
}

