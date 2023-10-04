#include<stdio.h>

 float main (){
      float a;

      printf("Insira um numero: \n");
      scanf("%f",&a);

      if (a==3)
      {
          printf("O numero e igual a tres.");
      }
      else if (a<3)
      {
          printf("O numero e menor que tres.");
      }
      else
      {
          printf("O numero e maior que tres.");
      }
  }
