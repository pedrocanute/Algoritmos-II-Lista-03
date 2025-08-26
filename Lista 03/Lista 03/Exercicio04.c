//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
///*Escreva uma função recursiva que recebe um array de inteiros e retorna o produto dos elementos do array.*/
//
//int produtoArray(int inteiros[], int n) {
//	if (n == 0)
//		return 1; //o elemento neutro da multiplicação é 1, aqui n representa o tamanho do array, não o indice
//	else
//		return inteiros[n - 1] * produtoArray(inteiros, n - 1); //o indice de um array é o seu tamanho - 1, em seguida chama a função novamente e envia um tamanho menor, mas não um indice
//}
//
//int main() {
//	srand(time(NULL));
//	int inteiros[4];
//
//	printf("Numeros gerados: ");
//	for (int i = 0; i < 4; i++) {
//		inteiros[i] = rand() % 50 + 1;
//		printf("%d ",inteiros[i]);
//	}
//
//	printf("\nO produto dos elementos do array eh: %d\n", produtoArray(inteiros, 4));
//
//	return 0;
//}