#include <stdio.h>
#include <stdlib.h>

float caltempo(float kmh, float distancia){
	float periodo;
	periodo = distancia / kmh;
	return periodo;
}

main(){
	int vei=0;
	int opc=0;
	
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
			tempo = caltempo(70, dist);
			printf("Tempo de viagem: %.1fh\n\n", tempo);
			break;
		case 2: // celta
			printf("VIAGEM DE CELTA\n\n");
			printf("distancia: %.1fkm\n", dist);
			tempo = caltempo(100, dist);
			printf("Tempo de viagem: %.1fh\n\n", tempo);
			break;
		case 3: // x=terra
			printf("VIAGEM DE X-TERRA\n\n");
			printf("distancia: %.1fkm\n", dist);
			tempo = caltempo(140, dist);
			printf("Tempo de viagem: %.1fh\n\n", tempo);
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
