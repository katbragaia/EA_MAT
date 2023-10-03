#include<stdio.h>
#include<math.h>

   int main(){
       int x,y;
       printf("Insira um valor inteiro: \n");
       scanf("%i",&y);
       x=y % 2;

       if (x==0)
        {
          printf("O valor e par \n", x);
        }
       else
        {
            printf("O valor e impar \n", x);
        }

        }
