//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////Escreva a função para cálculo do N - ésimo termo da sequência de Catalan utilizando recursividade.
//
//double calcularCatalan(double n) {
//
//	if (n <= 0) return 1;
//	else return    (2 *(2 * n - 1) / (n + 1)) * (calcularCatalan(n - 1));
//
//}
//
//int main() {
//
//	double n;
//
//	printf("Digite um numero: ");
//	scanf("%lf", &n);
//	printf("\nO %.2lfo termo de Catalan eh: %.2lf", n, calcularCatalan(n));
//
//	return 0;
//}