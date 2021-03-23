#include <stdio.h>
int main ()
{ int sal, novosal, perc,aumento;
printf("\nDigite seu salario\n");
scanf("%d%*c",&sal);
printf("\nDigite o percentual de aumento\n");
scanf("%d%*c",&perc);
aumento = (perc*sal)/100;
novosal =sal+aumento;
printf("\nSeu novo salario e = %d\n",novosal);
getchar();return 0;}
