#include<stdio.h>

 int main (){
       float x,y,d;

       printf("Digite um valor qualquer:");
       scanf("%f", &x);

       printf("Digite outro valor qualquer:");
       scanf("%f", &y);

       d= x-y;
       if (d>=0)
       {
        printf("A diferenca e maior ou igual a zero");
       }

       else if(d<0)
       {
           printf("A diferenca e menor que zero");
       }
   }
