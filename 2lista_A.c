#include<stdio.h>

   int main (){
   int A, B, C;

   printf("Digite A: \n");
   scanf("%i", &A);
   printf("Digite B: \n");
   scanf("%i", &B);
if(A>B)
{
    C=A-B;
    printf("o valor da diferen�a entre A e B e de: %i\n",C);
}
if(A<B)
{
    C=B-A;
    printf("o valor da diferen�a entre B e A e de: %i\n",C);
}
   }
