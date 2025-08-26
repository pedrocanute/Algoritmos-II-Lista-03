//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////Fazer um programa em "C" que lê um string do teclado e se utiliza de uma rotina recursiva para imprimir o string de maneira normal e de trás para frente.
//
//void lerString(char frase[], int n) {
//	if (n == 0)
//		return; //quando o tamanho do array for 0 apenas nao retorna nada. Caso base: se não há mais caracteres para imprimir, a função simplesmente termina
//	lerString(frase, n - 1);//entra na recursao com n - 1, empilha ate chegar ao caso base n == 0
//	printf("%c", frase[n - 1]);// volta imprimindo, quando n = 1 ele imprime o elemento na posição 0 do array durante o desimpilhamento
//}
//void lerStringInvertida(char frase[], int n) {
//	if (n == 0)
//		return;
//	printf("%c", frase[n - 1]); //primeiro imprime a partir do ultimo elemento do array
//	lerStringInvertida(frase, n - 1);//chama recursivamente com n-1 até chegar no caso base (n==0); cada chamada imprime seu caractere antes de recursar, resultando na ordem invertida.
//}
//
//int main() {
//
//	char frase[50];
//	printf("\nDigite uma frase: ");
//	scanf("%[^\n]", frase);
//
//	int n = strlen(frase); //uma função da <string.h> que conta quantos caracteres tem uma string
//
//	printf("\nFrase normal: ");
//	lerString(frase, n);
//	printf("\nFrase invertida: ");
//	lerStringInvertida(frase, n);
//
//	return 0;
//}
