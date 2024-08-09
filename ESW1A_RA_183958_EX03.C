/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 27/05/2024 
Objetivo: er dois vetores (A com 5 elementos e B com 10 elementos) 
e construir um vetor C com a concatenação dos vetores A e B.
*/
#include <stdio.h>
int main () { 
  int A[5];
  int B[10];
  int C[15];
  printf("Concatenacao de vetores: ");
  //VETOR A
  printf("Digite 5 numeros pro vetor A: ");
    for (int i = 0; i < 5; i++)
    {
      scanf("%d" ,&A[i]);
    }
  //VETOR B
  printf("Digite 10 numeros pro vetor B: ");
      for (int i = 0; i < 10; i++)
      {
       scanf("%d" ,&B[i]);
      }
  //VETOR C
        for (int i = 0; i < 5; i++)
        {
          C[i] = A[i];
        }
        for (int i = 0; i < 10; i++)
        {
          C[5 + i] = B[i];
        }
  //apresentando C
  printf("Vetor C (concatenacao de A e B):");
    for (int i = 0; i < 15; i++)
    {
      printf("%d" ,C[i]);
    }
  printf("\n");
    
  return 0;
}