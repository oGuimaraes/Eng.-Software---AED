#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int item;

    printf("     * CARD�PIO *     \n");
    printf("1)Hamburguer - R$ 10,00. \n");
    printf("2)Cheeseburguer - R$ 35,00. \n");
    printf("3)Fritas - R$ 20,50. \n");
    printf("4)Refrigerante - R$ 20,50. \n");
    printf("5)Milkshake - R$ 30,00. \n\n");
    printf("Escolha um item do card�pio: ");
    scanf("%d", & item);

    if (item == 1){
        printf("\nVoc� escolheu o Hamburguer - R$ 10,00. \n");
    } else if (item == 2) {
        printf("\nVoc� escolheu o Cheeseburguer - R$ 35,00. \n");
    } else if (item == 3) {
        printf("\nVoc� escolheu as Fritas - R$ 20,50. \n");
    } else if (item == 4) {
        printf("\nVoc� escolheu o Refrigerante - R$ 20,50. \n");
    } else if (item == 5) {
        printf("\nVoc� escolheu o Milkshake - R$ 30,00. \n");
    } else {
        printf("\nValor digitado inv�lido.\n");
    }



    return 0;
}
