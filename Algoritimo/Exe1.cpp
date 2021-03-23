#include<stdio.h>
int main()
{
    float n1,n2,soma;
    printf("digite 1 numero ");
    scanf("%f%*c", & n1);
    printf("digite 2 numero ");
    scanf("%f%*c", & n2);
    soma = n1+n2;
    printf("o resultado da soma eh %f", soma);
    getchar();
    return 0;
}
