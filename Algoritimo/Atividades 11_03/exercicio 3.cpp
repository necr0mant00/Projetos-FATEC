#include <stdio.h>
int main ()
{ int n1, n2, n3, p1, p2, p3, media;
printf("\nDigite 3 notas e seus respectivos pesos\n");
scanf("%d%*c",&n1);
scanf("%d%*c",&p1);
scanf("%d%*c",&n2);
scanf("%d%*c",&p2);
scanf("%d%*c",&n3);
scanf("%d%*c",&p3);
media = (n1*p1 + n2*p2 + n3*p3 )/(p1+p2+p3);
printf("\nA media e = %d\n",media);
getchar();return 0;}
