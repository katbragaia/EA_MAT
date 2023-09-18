#include<stdio.h>

 int main (){
     int A, B, C, D, SAB, SAC, SAD, SBD, SBC, SCD, PAB, PAC, PAD, PBC, PBD, PCD;
printf("escreva A:");
scanf("%i" ,&A);
printf("escreva B:");
scanf("%i", &B);
printf("escreva C:");
scanf("%i", &C);
printf("escreva D:");
scanf("%i", &D);
SAB = A + B;
SAC = A + C;
SAD = A + D;
SBC = B + C;
SBD = B + D;
SCD = C + D;

PAB = A * B;
PAC = A * C;
PAD = A * D;
PBC = B * C;
PBD = B * D;
PCD = C * D;

printf("\nSoma de A e B: %.2i ", SAB);
printf("\nSoma de A e C: %.2i ", SAC);
printf("\nSoma de A e D: %.2i ", SAD);
printf("\nSoma de B e C: %.2i ", SBC);
printf("\nSoma de B e D: %.2i ", SBD);
printf("\nSoma de C e D: %.2i ", SCD);
printf("\nProduto de A e B: %.2i ", PAB);
printf("\nProduto de A e C: %.2i ", PAC);
printf("\nProduto de A e D: %.2i ", PAD);
printf("\nProduto de B e C: %.2i ", PBC);
printf("\nProduto de B e D: %.2i ", PBD);
printf("\nproduto de C e D: %.2i ", PCD);
}











