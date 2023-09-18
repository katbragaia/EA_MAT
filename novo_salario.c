#include<stdio.h>

  float main(){

  float SM, VPR, NS;

   printf("digite o salario mensal:\n ");
   scanf("%f",  &SM);
   printf("digite valor percentual de reajuste: \n ");
   scanf("%f",  &VPR);

   NS=SM*(VPR/100+1);
   printf("o valor do novo salario e de:%.2f", NS);













}
