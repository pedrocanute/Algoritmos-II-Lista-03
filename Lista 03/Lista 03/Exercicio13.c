//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N.Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
//
//int contar_digito(int n, int x) {
//	
//	if (n == 0)
//		return 0;
//	if (n % 10 == x)
//		return 1 + contar_digito(n/10, x);
//	else
//		contar_digito(n/10, x);
//}
//
//int main(){
//	srand(time(NULL));
//
//	int numero = rand() % 32767;
//	numero *= 3052;
//	int digito = rand() % 10;
//	printf("Sorteado: %d | Digito procurado: %d", numero, digito);
//	printf("\nDigitos encontrados: %d", contar_digito(numero, digito));
//
//	return 0;
//}