#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero, valorResto;

    printf("Digite um n�mero: ");
    scanf("%f", & numero);

    valorResto = fmod(numero,7);

    printf("O resto da divis�o %.0f/7 � %.0f.", numero, valorResto);



    return 0;
}
