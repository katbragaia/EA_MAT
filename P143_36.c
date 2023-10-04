#include<stdio.h>

 float main (){
     float x,y,t;

     printf("Insira o valor da compra: \n");
     scanf("%f",&y);
     printf("\nInsira o valor pago: \n");
     scanf("%f",&x);

     if (y==x)
     {
         printf("Troco nao e necessario");
     }
     else if (y>x)
     {
         t=y-x;
         printf("Valor que falta: %.2f",t);
     }
     else
     {
         t=x-y;
         printf("Troco necessario: %.2f",t);
     }
 }
