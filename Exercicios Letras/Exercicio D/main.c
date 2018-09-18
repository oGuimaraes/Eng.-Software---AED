#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float cel, far;
    printf("Escreva a temperatura em graus Celsius (Cº): ");
    scanf("%f", &cel);
    far = (1.8 * cel) + 32;
    printf("Na conversão, %2.fCº é o mesmo que %.2fFº\n", cel, far);

    printf("Escreva a temperatura em Fahreinheit (Fº): ");
    scanf("%f", & far);
    cel = (far - 32) / 1.8;
    printf("Na conversão, %2.fFº é o mesmo que %.2fCº\n", far, cel);

}
