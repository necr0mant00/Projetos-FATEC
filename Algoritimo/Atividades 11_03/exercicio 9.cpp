#include <stdio.h>
int main ()
{ int area,base,altura;
printf("\nDigite a base do triangulo\n");
scanf("%d%*c",&base);
printf("\nDigite a altura do triangulo\n");
scanf("%d%*c",&altura);
area=(base*altura)/2;
printf("\nA area do triangulo e = %d\n",area);
getchar();return 0;}
