#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float tempAgua;

    printf("Escreva a temperatura da àgua (Cº): ");
    scanf("%f", & tempAgua);

    if (tempAgua < 0)
    {
        printf("Em %2.fCº o estado da água é sólido.", tempAgua);
    }
    else if (tempAgua > 0 && tempAgua < 99)
    {
        printf("Em %2.fCº o estado da água é líquido.", tempAgua);
    }
    else if (tempAgua > 100)
    {
        printf("Em %2.fCº o estado da água é gasoso.", tempAgua);
    }
    return 0;
}
