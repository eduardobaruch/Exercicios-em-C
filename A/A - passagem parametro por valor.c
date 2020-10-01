#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

bool func = true; // funcionamento do programa

//float altura, peso;
//char sexo;

void erro(){
	printf("Opção inválida!\n\n");
	system("pause");
	system("cls");
}

/***
void entrada(int prop){
	// 1 - altura
	// 2 - peso
	// 3 - sexo
	switch(prop){
		case 1:
			printf("Digite a altura (metros): ");
			scanf("%f", &altura);
			fflush(stdin);
			break;
		case 2:
			printf("Digite o peso (quilos): ");
			scanf("%f", &peso);
			fflush(stdin);
			break;
		case 3:
			printf("Digite o sexo (m/f): ");
			sexo = getche();
			fflush(stdin);
			if (sexo=='M')
				sexo = 'm';
			else if (sexo=='F')
				sexo = 'f';
			break;
	}
}

**/

void calimc(float H, float P){
	printf("CALCULAR ÍNDICE DE MASSA CORPÓREA\n\n");
	system("cls");
	
	char cond[20];
	
	float imc;
	imc = P / (H * H);
	if (imc>= 18.5 && imc<=24.9)
		strcpy(cond, "normal");
	else
		if (imc>=25 && imc<=29.9)
			strcpy(cond, "sobrepeso");
		else
			if (imc>= 30 && imc<=34.9)
				strcpy(cond, "obesidade classe I");
			else
				if (imc>=35 && imc<=39.9)
					strcpy(cond, "obesidade classe II");
				else
					strcpy(cond, "obesidade mórbida");
	
	printf("> IMC: %.2f; %s\n\n", imc, cond);
	
	system("pause");
	system("cls");
}


float CalcPesoIdealHomem(float H){
	return (H * 72.7 - 58);
}

float CalcPesoIdealMulher(float H){
	return (62.1 * H - 44.7);
}


void calpideal(float H, char s, float *PI){
	printf("CALCULAR PESO IDEAL\n\n");
	system("cls");
	
	switch(sexo){
		case 'm':
			PI = CalcPesoIdealHomem(H);
			//printf("> Seu peso ideal é %.2f\n\n", pesoideal);
			//printf("> Seu peso ideal é %.2f\n\n", CalcPesoIdealHomem(H));
			break;
		case 'f':
			PI = CalcPesoIdealMulher(H);
			//printf("> Seu peso ideal é %.2f\n\n", pesoideal);
			break;
		default:
			erro();
	}
	
	system("pause");
	// system("cls");
}

void fim(){
	printf("FIM DO PROGRAMA\n\n");
	func = false;
	system("pause");
}


void menu(){
	int escolha;
	float altura, peso;
	char sexo;
	float pesoideal;
	
	printf("1 - Calcular IMC\n2 - Calcular peso ideal\n3 - Sair\n\n");
	printf("digite: ");
	scanf("%d", &escolha);
	system("cls");
		
	switch(escolha){
		case 1:
			printf("Digite a altura (metros): ");
			scanf("%f", &altura);
			fflush(stdin);
			
			printf("Digite o peso (quilos): ");
			scanf("%f", &peso);
			fflush(stdin);	
			
			calimc(altura, peso);
			break;
		case 2:
			printf("Digite a altura (metros): ");
			scanf("%f", &altura);
			fflush(stdin);
			
			printf("Digite o sexo (m/f): ");
			sexo = getche();
			fflush(stdin);
			if (sexo=='M')
				sexo = 'm';
			else if (sexo=='F')
				sexo = 'f';
			
			calpideal(altura, sexo, &pesoideal);
			printf("> Seu peso ideal é %.2f\n\n", pesoideal);
			system("pause");
			system("cls");
			break;
		case 3:
			fim();
			break;
		default:
			erro();
	} 
}

main(){
	setlocale(LC_ALL, "portuguese");	
		
	// digitar float com vírgula
	while (func){
		menu();
	}	
}
