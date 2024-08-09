/*
Autor....: Matheus Guilherme Moreira de Oliveira <matheusgmoreira1@gmail.com>
Data.....: 27/05/2024
Objetivo.: Ler um vetor de 10 números reais e calcular a soma dos valores maiores que a média do vetor.
*/

#include <stdio.h>

int main() {
    float vetor[10], soma = 0.0, media;

    // Lendo os valores do vetor
    printf("Soma acima da mEdia:\n");
    printf("Digite 10 numeros reais:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    // Calculando a média
    media = soma / 10;

    // Calculando a soma dos valores maiores que a média
    soma = 0.0; // Reinicializando soma para reutilização
    for(int i = 0; i < 10; i++) {
        if(vetor[i] > media) {
            soma += vetor[i];
        }
    }

    printf("Soma dos valores maiores que a media: %.2f\n", soma);

    return 0;
}
