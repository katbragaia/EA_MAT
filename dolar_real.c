#include<stdio.h> 

  float main(){

  float cotacao, dolares, conversao;

    
  printf("Insira a cotacao atual:\n");
  scanf("%f", &cotacao);
  printf("digite o valor em dolares:\n");
  scanf("%f", &dolares);
  conversao=cotacao*dolares;
  printf("o valor atual da conversao em reais e de:%.2f", conversao);


}
