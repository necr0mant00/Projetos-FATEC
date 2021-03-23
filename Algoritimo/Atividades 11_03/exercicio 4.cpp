#include <stdio.h>
int main ()
{ int sal, novosal;
printf("\nDigite seu salario\n");
scanf("%f%*c",&sal);
novosal = (sal*0.25)+sal;
printf("\nSeu novo salario e = %f\n",novosal);
getchar();return 0;}
