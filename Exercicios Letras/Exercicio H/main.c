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

    printf("O valor de A agora � %f, e o novo B � %f", a, b);
    return 0;
}
