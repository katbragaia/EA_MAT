#include<stdio.h>
int main (){
int  a[6],d[6],i;
a[1]=10;
a[2]=2;
a[3]=7;
a[4]=5;
a[5]=3;

for(i=1;i<=5;i++)
{
  d[i]=a[i];


}

printf("%i %i %i %i %i", d[2],d[5],d[4],d[3],d[1]);
}
