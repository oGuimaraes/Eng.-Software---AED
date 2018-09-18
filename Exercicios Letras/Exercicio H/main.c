#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a,b;

    printf("Escolha um valor para A: ");
    scanf("%f", & a);

    printf("Escolha um valor para B: ");
    scanf("%f", & b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("O valor de A agora é %f, e o novo B é %f", a, b);
    return 0;
}
