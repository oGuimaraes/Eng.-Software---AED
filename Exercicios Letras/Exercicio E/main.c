#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, aumento;

    printf("Escreva o salário do funcionário: ");
    scanf("%f", & salario);
    printf("Escreva a porcentagem de aumento do salário do funcionário: ");
    scanf("%f", & aumento);
    aumento = salario * (aumento/100);
    salario = salario + aumento;
    printf ("\nO novo salário do funcionário é %.2f\n", salario);

    return 0;
}
