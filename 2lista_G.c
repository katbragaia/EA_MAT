#include<stdio.h>
#include<math.h>
 int main()
  {
  int a,b,c,d;
  printf("Digite quatro valores inteiros:");
  scanf("%i %i %i %i", &a,&b,&c,&d);

  if (a%2==0&&a%3==0)
  {
  printf("%i e divisivel por 2 e 3", a);
  }
   if (b%2==0&&b%3==0)
  {
  printf("%i e divisivel por 2 e 3", b);
  }
  if (c%2==0&&c%3==0)
  {
  printf("%i e divisivel por 2 e 3", c);
  }
  if (d%2==0&&d%3==0)
  {
  printf("%i e divisivel por 2 e 3", d);
  }


  printf ("Os valores que nao foram apresentados nao sao divisiveis por 2 e por 3 ao mesmo tempo ");

  }
