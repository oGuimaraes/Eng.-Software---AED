#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float base, altura, areaTotal;
    printf("Informe o tamanho da base do tri�ngulo: ");
    scanf("%f", & base);

    printf("Informe o altura do tri�ngulo: ");
    scanf("%f", & altura);

    areaTotal = (base * altura) / 2.0;
    printf("A area total do tri�ngulo � %.2f\n", areaTotal);

    return 0;
}
