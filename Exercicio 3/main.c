#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float tempAgua;

    printf("Escreva a temperatura da �gua (C�): ");
    scanf("%f", & tempAgua);

    if (tempAgua < 0)
    {
        printf("Em %2.fC� o estado da �gua � s�lido.", tempAgua);
    }
    else if (tempAgua > 0 && tempAgua < 99)
    {
        printf("Em %2.fC� o estado da �gua � l�quido.", tempAgua);
    }
    else if (tempAgua > 100)
    {
        printf("Em %2.fC� o estado da �gua � gasoso.", tempAgua);
    }
    return 0;
}
