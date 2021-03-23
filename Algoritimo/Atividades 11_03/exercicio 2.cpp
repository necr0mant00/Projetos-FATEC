#include <stdio.h>
int main ()
{ int n1, n2, n3, soma, media;
printf("\nDigite 3 notas\n");
scanf("%d%*c",&n1);
scanf("%d%*c",&n2);
scanf("%d%*c",&n3);
soma = n1 + n2 + n3;
media = soma/3;
printf("\nA media e = %d\n",media);
getchar();return 0;}
