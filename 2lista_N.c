#include<stdio.h>

 int main(){
      int A, B, C, Soma;

      printf("Insira tres valores inteiros: \n");
      scanf("%i %i %i",&A,&B,&C);

      Soma= A+B+C;

      if (Soma>=100)
      {
          printf("Resultado da soma: %i", Soma);
      }
      else
      {
          printf("O resultado e invalido");
      }
  }
