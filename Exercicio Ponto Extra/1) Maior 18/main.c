#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Digite uma idade: ");
    scanf("%d", & idade);

    if (idade >= 18){
        printf("A pessoa � maior de 18 anos.\n");
    } else {
        printf("A pessoa � menor de 18 anos.\n");
    }

    return 0;
}
