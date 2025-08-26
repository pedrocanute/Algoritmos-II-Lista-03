//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//
////Escreva uma função que calcula o número fatorial de um número.Implementar uma versão recursiva e uma versão com laço de repetição.
//
//int numero_fatorial(int n) {
//	if (n <= 1)
//		return 1;
//	else
//		return n * numero_fatorial(n - 1);
//}
//
//int main() {
//
//	int n;
//	printf("---Numeros Fatoriais---\n\n");
//	printf("Digite um numero: ");
//	scanf("%d", &n);
//
//	printf("\n%d! (recursao) = %d.\n", n, numero_fatorial(n));
//
//	int fatorial = 1;
//	for (int i = 1; i <= n; i++) {
//		fatorial *= i; 
//	}
//
//	printf("%d! (iteracao) = %d\n", n, fatorial);
//	return 0;
//}