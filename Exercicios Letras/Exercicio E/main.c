#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, aumento;

    printf("Escreva o sal�rio do funcion�rio: ");
    scanf("%f", & salario);
    printf("Escreva a porcentagem de aumento do sal�rio do funcion�rio: ");
    scanf("%f", & aumento);
    aumento = salario * (aumento/100);
    salario = salario + aumento;
    printf ("\nO novo sal�rio do funcion�rio � %.2f\n", salario);

    return 0;
}
