#include <stdio.h>
#include <stdlib.h>

void lermatriz(int (matriz)[5][5]){
	for (int i=0; i<5; i++){ // linhas
		for (int j=0; j<5; j++){ // colunas
			system("cls");
			printf("Digite o valor [%d][%d]: ", i+1, j+1);
			scanf("%d", &(matriz)[i][j]);
		}
	}
}

int somalin4(int vetor[5]){
	int soma=0;
	for (int i=0; i<5; i++){
		soma += vetor[i];
	}
	return soma;
}


 main(){
	int mat[5][5];
	int *pont = {NULL};
	pont = &mat;
	lermatriz(pont);
	
	int lin4 = somalin4(mat[4]);
	printf("\nSoma da linha: %d", lin4);
	
}
