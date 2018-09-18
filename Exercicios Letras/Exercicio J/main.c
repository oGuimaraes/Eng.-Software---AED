#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, a1, a2, r, s;

    printf("Escreva um valor A1: ");
    scanf("%d", & a1);
    printf("Escreva um valor A2: ");
    scanf("%d", & a2);
    printf("Escreva o valor de N: ");
    scanf("%d", & n);

    r = a2 - a1;
    s = n * (a1 + a2 + (n - 1) * r) / 2.0;

    printf("A soma dos termos é %d", s);

    return 0;
}
