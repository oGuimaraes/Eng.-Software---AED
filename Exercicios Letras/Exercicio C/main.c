#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, mediaP;
    int peso1, peso2, peso3;

    printf("Escreva a primeira nota: ");
    scanf("%f", & nota1);
    printf("Escreva o peso da primeira nota: ");
    scanf("%d", & peso1);

    printf("Escreva a segunda nota: ");
    scanf("%f", & nota2);
    printf("Escreva o peso da segunda nota: ");
    scanf("%d", & peso2);

    printf("Escreva a terceira nota: ");
    scanf("%f", & nota3);
    printf("Escreva o peso da terceira nota: ");
    scanf("%d", & peso3);

    mediaP = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3);
    printf("A média ponderada é: %2.f", mediaP);


    return 0;
}
