#include <stdio.h>
#include <stdlib.h>

void caltempo1(float distancia, float *periodo1){
	*periodo1 = distancia / 70;

	}
	
void caltempo2(float distancia, float *periodo2){
	*periodo2 = distancia / 100;

	}
	
void caltempo3(float distancia, float *periodo3){
	*periodo3 = distancia / 140;
	
	}
	

	
main(){
	int vei=0;
	int opc=0;
	float periodo;
	
	while (opc != 1){

	while (vei<1 || vei>3){
		printf("1 - Onibus\n2 - Celta\n3 - X-terra\n\n");
		printf("Escolha o veiculo: ");
		scanf("%d", &vei);
		system("cls");
		if (vei<1 || vei>3)
			printf("Invalido\n\n");
	}
	
	float dist, tempo;
	printf("Digite a distancia(km): ");
	scanf("%f", &dist);
	system("cls");
	
	switch(vei){
		case 1: // ônibus
			printf("VIAGEM DE ONIBUS\n\n");
			printf("distancia: %.1fkm\n", dist);
			caltempo1(dist, &periodo);
			printf("Tempo de viagem: %.1fh\n\n", periodo);
			break;
		case 2: // celta
			printf("VIAGEM DE CELTA\n\n");
			printf("distancia: %.1fkm\n", dist);
			caltempo2(dist, &periodo);
			printf("Tempo de viagem: %.1fh\n\n", periodo);
			break;
		case 3: // x=terra
			printf("VIAGEM DE X-TERRA\n\n");
			printf("distancia: %.1fkm\n", dist);
			caltempo3(dist, &periodo);
			printf("Tempo de viagem: %.1fh\n\n", periodo);
			break;
	}
	system("pause");
	
	printf("\nVoce deseja sair? 1-Sim ou 2-Nao: ");
	scanf("%d", &opc);
	fflush(stdin);
	vei=0;
	system("cls");
	}
}
