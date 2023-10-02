#include<stdio.h>

  int main(){
      int x,y;

      printf("Digite um valor inteiro: \n");
      scanf("%i",&x);

      y=x*2;

      if (y>30)
      {
          printf("Resultado da multiplicacao: %i", y);
      }
      else
      {
          printf("Nao ha valor para ser apresentado");
      }
  }
