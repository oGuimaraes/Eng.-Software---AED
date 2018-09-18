#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero, valorResto;

    printf("Digite um número: ");
    scanf("%f", & numero);

    valorResto = fmod(numero,7);

    printf("O resto da divisão %.0f/7 é %.0f.", numero, valorResto);



    return 0;
}
