#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float cel, far;
    printf("Escreva a temperatura em graus Celsius (C�): ");
    scanf("%f", &cel);
    far = (1.8 * cel) + 32;
    printf("Na convers�o, %2.fC� � o mesmo que %.2fF�\n", cel, far);

    printf("Escreva a temperatura em Fahreinheit (F�): ");
    scanf("%f", & far);
    cel = (far - 32) / 1.8;
    printf("Na convers�o, %2.fF� � o mesmo que %.2fC�\n", far, cel);

}
