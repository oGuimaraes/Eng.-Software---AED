#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, num4, media;

    printf("Escreve o o 1º número: ");
    scanf("%f", &num1 );
    printf("Escreve o o 2º número: ");
    scanf("%f", &num2 );
    printf("Escreve o o 3º número: ");
    scanf("%f", &num3 );
    printf("Escreve o o 4º número: ");
    scanf("%f", &num4 );

    media = (num1 + num2 + num3 + num4)/4;
    printf("A média dos números é %2.f", media);
}
