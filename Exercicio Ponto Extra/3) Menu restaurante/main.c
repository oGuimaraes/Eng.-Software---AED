#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int item;

    printf("     * CARDÁPIO *     \n");
    printf("1)Hamburguer - R$ 10,00. \n");
    printf("2)Cheeseburguer - R$ 35,00. \n");
    printf("3)Fritas - R$ 20,50. \n");
    printf("4)Refrigerante - R$ 20,50. \n");
    printf("5)Milkshake - R$ 30,00. \n\n");
    printf("Escolha um item do cardápio: ");
    scanf("%d", & item);

    if (item == 1){
        printf("\nVocê escolheu o Hamburguer - R$ 10,00. \n");
    } else if (item == 2) {
        printf("\nVocê escolheu o Cheeseburguer - R$ 35,00. \n");
    } else if (item == 3) {
        printf("\nVocê escolheu as Fritas - R$ 20,50. \n");
    } else if (item == 4) {
        printf("\nVocê escolheu o Refrigerante - R$ 20,50. \n");
    } else if (item == 5) {
        printf("\nVocê escolheu o Milkshake - R$ 30,00. \n");
    } else {
        printf("\nValor digitado inválido.\n");
    }



    return 0;
}
