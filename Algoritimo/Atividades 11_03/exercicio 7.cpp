#include <stdio.h>
int main ()
{ int sal, salrecebe, imposto;
printf("\nDigite seu salario\n");
scanf("%d%*c",&sal);
imposto = (10*sal)/100;
salrecebe =sal+50-imposto;
printf("\nSeu salario e = %d\n",salrecebe);
getchar();return 0;}
