#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float pesoSaco, consumoGato, restoSaco;

    printf("Escreva o peso do saco de ra��o (KG): ");
    scanf("%f", & pesoSaco);

    printf("Escreva a quantidade de consumo de ra��o de cada gato: (Gramas) ");
    scanf("%f", & consumoGato );

    consumoGato = (consumoGato/1000) * 2;
    restoSaco = (pesoSaco - consumoGato * 5);
    printf("Ap�s 5 dias, restar� no saco %.2fkgs de ra��o./n.", restoSaco);

}
