#include<stdio.h>

 int main (){
    float a,b,c,d;

    printf("Digite o valor do lado 1 do retangulo: \n");
    scanf("%f",&a);
    printf("Digite o valor do lado 2 do retangulo: \n");
    scanf("%f",&b);
    printf("Digite o valor do lado 3 do retangulo: \n");
    scanf("%f",&c);
    printf("Digite o valor do lado 4 do retangulo: \n");
    scanf("%f",&d);

    if (a==b&&b==c&&c==d)
    {
        printf("O retangulo e um quadrado");
    }
    else if (a==b&&a!=c&&c==d||d==a&&a!=b&&b==c||a==c&&c!=d&&d==b)
    {
        printf("O retangulo nao e um quadrado");
    }
    else
    {
        printf("Retangulo nao valido");
    }
  }
