#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

bool func = true; // funcionamento do programa

float altura, peso;
char sexo;

void erro(){
	printf("Opção inválida!\n\n");
	system("pause");
	system("cls");
}

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

void calimc(){
	printf("CALCULAR ÍNDICE DE MASSA CORPÓREA\n\n");
	entrada(1);
	entrada(2);
	system("cls");
	
	char cond[20];
	
	float imc;
	imc = peso / (altura * altura);
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

void calpideal(){
	printf("CALCULAR PESO IDEAL\n\n");
	entrada(1);
	entrada(3);
	system("cls");
	
	float pesoideal;
	switch(sexo){
		case 'm':
			pesoideal = altura * 72.7 - 58;
			printf("> Seu peso ideal é %.2f\n\n", pesoideal);
			break;
		case 'f':
			pesoideal = 62.1 * altura - 44.7;
			printf("> Seu peso ideal é %.2f\n\n", pesoideal);
			break;
		default:
			erro();
	}
	
	system("pause");
	system("cls");
}

void fim(){
	printf("FIM DO PROGRAMA\n\n");
	func = false;
	system("pause");
}

void menu(){
	int escolha;
	
	printf("1 - Calcular IMC\n2 - Calcular peso ideal\n3 - Sair\n\n");
	printf("digite: ");
	scanf("%d", &escolha);
	system("cls");
		
	switch(escolha){
		case 1:
			calimc();
			break;
		case 2:
			calpideal();
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
