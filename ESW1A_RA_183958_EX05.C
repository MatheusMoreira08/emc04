/*
Autor....: Matheus Guilherme Moreira de Oliveira 
Data.....: 27/05/2024
Objetivo.: Ler 15 elementos de um vetor A e construir um vetor B onde cada elemento de B é o quadrado do elemento correspondente em A.
*/
#include <stdio.h>

int main() {
    int A[15], B[15];

    // Lendo os valores do vetor A
    printf("Quadrado dos elementos:\n");
    printf("Digite 15 numeros inteiros para o vetor A:\n");
    for(int i = 0; i < 15; i++) {
        scanf("%d", &A[i]);
    }

    // Construindo o vetor B
    for(int i = 0; i < 15; i++) {
        B[i] = A[i] * A[i];
    }

    // Apresentando os vetores A e B
    printf("Vetor A:\n");
    for(int i = 0; i < 15; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Vetor B (quadrado dos elementos de A):\n");
    for(int i = 0; i < 15; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
