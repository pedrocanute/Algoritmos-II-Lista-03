//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//
////Escreva a função para cálculo do N - ésimo termo da sequência de Padovan utilizando recursividade. P(n)=P(n−2)+P(n−3),para n>2
//
//int calcularPadovan(int n) {
//	if (n < 0)
//		return 0;
//	else
//		if (n < 2)
//			return 1;
//		else
//			return calcularPadovan(n - 2) + calcularPadovan(n - 3);
//}
//
//int main() {
//	int n;
//	printf("\t---Sequencia de Padovan---\n\n");
//	printf("Digite um numero: ");
//	scanf("%d", &n);
//
//	printf("\nO %do termo da Sequencia de Padovan eh: %d", n, calcularPadovan(n));
//
//	return 0;
//}