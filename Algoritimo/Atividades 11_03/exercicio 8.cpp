#include <stdio.h>
int main ()
{ int deposito, juros, rendimento, total;
printf("\nDigite o valor do deposito\n");
scanf("%d%*c",&deposito);
printf("\nDigite o valor da taca de juros\n");
scanf("%d%*c",&juros);
rendimento = (deposito*juros)/100;
total = deposito+rendimento;
printf("\nO valor do rendimento e = %d\n",rendimento);
printf("\nO valor a receber total e = %d\n",total);
getchar();return 0;}
