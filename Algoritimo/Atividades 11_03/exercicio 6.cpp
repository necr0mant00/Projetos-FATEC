#include <stdio.h>
int main ()
{ int sal, salrecebe, grat, imposto;
printf("\nDigite seu salario\n");
scanf("%d%*c",&sal);
grat = (5*sal)/100;
imposto = (7*sal)/100;
salrecebe =sal+grat-imposto;
printf("\nSeu salario e = %d\n",salrecebe);
getchar();return 0;}
