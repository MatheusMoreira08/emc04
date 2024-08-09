/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 27/05/2024 
Objetivo: Escreva um algoritmo que leia um vetor de 10 números inteiros e imprima na tela os valores em ordem inversa.
*/
#include <stdio.h>

int main() {
    int num[10];

    // Lendo os valores do vetor
    printf("Ordem reversa:\n");
    printf("Digite 10 numeros inteiros:\n");
    for(int x = 0; x < 10; x++) {
        scanf("%d", &num[x]);
    }

    // Imprimindo os valores em ordem reversa
    printf("Valores em ordem reversa:\n");
    for(int x = 9; x >= 0; x--) {
        printf("%d ", num[x]);
    }
    printf("\n");

    return 0;
}

