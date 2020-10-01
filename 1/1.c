#include <stdio.h>
#include <stdlib.h>

void conferir(int g[], int r[], int cartao);

main(){
int g[13];
int cartao;
int r[13];
int i, j;

//Leitura do gabarito
printf("=============================\n");
printf("=====LEITURA DO GABARITO=====\n");
printf("=============================\n\n");

for (i = 0;i < 13; i++){
	printf("Digite o gabarito do jogo %d: ", i+1);
	scanf("%d", &g[i]);
}
	system("cls");

printf("=================================\n");
printf("=====LEITURA DOS APOSTADORES=====\n");
printf("=================================\n\n");

//Leitura dos jogos dos 10 apostadores
for (i = 0; i < 10; i++) {
	printf("Digite o numero do cartao do apostador %d: \n", i+1);
	scanf("%d", &cartao);
	
		for (j = 0; j < 13; j++) {
			printf("Digite a resposta do jogo %d: ", j+1);
			scanf("%d", &r[j]);
		}
		
		
		system("cls");
		conferir(g, r, cartao);
	
}
	
system("PAUSE");
}

//Conferencia do jogo
void conferir(int g[13], int r[13], int cartao) {
	int i;
	int cont = 0;
	for (i = 0; i < 13; i++) {
		cont += (r[i] == g[i]);
	}
	printf("O apostador do cartao %d acertou %d\n", cartao, cont);
	if (cont == 13) {
		printf("GANHADOR, PARABENS\n\n");
	}
	else printf("Nao foi dessa vez.\n\n");
}

