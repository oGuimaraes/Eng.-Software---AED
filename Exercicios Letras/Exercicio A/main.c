#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    int numero, sucessor;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um valor: ");
    scanf("%d", &numero);
    sucessor = numero + 1;
    printf("O número sucessor de: %d\n", sucessor);

    return 0;
}
