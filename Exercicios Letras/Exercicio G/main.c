#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float pesoSaco, consumoGato, restoSaco;

    printf("Escreva o peso do saco de ração (KG): ");
    scanf("%f", & pesoSaco);

    printf("Escreva a quantidade de consumo de ração de cada gato: (Gramas) ");
    scanf("%f", & consumoGato );

    consumoGato = (consumoGato/1000) * 2;
    restoSaco = (pesoSaco - consumoGato * 5);
    printf("Após 5 dias, restará no saco %.2fkgs de ração./n.", restoSaco);

}
