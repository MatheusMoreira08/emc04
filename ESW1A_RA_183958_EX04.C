/*
Autor....: Matheus Guilherme Moreira de Oliveira 
Data.....: 27/05/2024
Objetivo.: Ler um vetor de 10 números inteiros e imprimir os valores que são números primos.
*/
#include <stdio.h>
int main () {
  int vetor[10];
  printf("Numeros primos\n");
  printf("Digite 10 numeros inteiros: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d" , &vetor[i]);
    }
  //imprimindo os numeros primos 
  printf("Numeros primos: ");
  for (int i = 0; i < 10; i++)
  {
    int num = vetor[i];
    int eprimo = 1;
    if (num <= 1)
    {
      eprimo = 0;
    } else { 
        for (int j = 2; j * j <= num; j++)
        {
          if (num % j == 0)
          {
            eprimo = 0;
            break;
          }
          
        }
        
    }
    if (eprimo)
    {
      printf("%d" ,num);
    }
    
  }
    printf("\n");
  return 0;
}