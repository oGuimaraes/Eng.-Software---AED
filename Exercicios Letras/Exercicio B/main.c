#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, num4, media;

    printf("Escreve o o 1� n�mero: ");
    scanf("%f", &num1 );
    printf("Escreve o o 2� n�mero: ");
    scanf("%f", &num2 );
    printf("Escreve o o 3� n�mero: ");
    scanf("%f", &num3 );
    printf("Escreve o o 4� n�mero: ");
    scanf("%f", &num4 );

    media = (num1 + num2 + num3 + num4)/4;
    printf("A m�dia dos n�meros � %2.f", media);
}
