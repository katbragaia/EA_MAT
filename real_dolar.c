#include<stdio.h>
    float main(){

    float conversao, reais, cotacao;

     printf("Insira a cotacao atual:\n");
     scanf("%f", &cotacao);
     printf("digite o valor em reais:\n");
     scanf("%f", &reais);
     conversao=reais*cotacao;
     printf("o valor atual da conversao em dolares e de:%.2f", conversao);


}

