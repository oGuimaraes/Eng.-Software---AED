#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include<stdbool.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int option;
    system("cls");
    do
    {
        printf("\n");
        printf("|ITEM |   Exercicios Fun��es   |\n");
        printf("|---- |------------------------|\n");
        printf("|  1  |   Conjunto de Valores  |\n");
        printf("|  2  |    Checar Par e Impar  |\n");
        printf("|  3  |      Divisivel por N   |\n");
        printf("|  4  |        Mercadoria      |\n");
        printf("+-----+------------------------+\n");
        printf("\n");
        printf("Escolha um exerc�cio: ");
        scanf("%d", & option);

        switch(option)
        {
        case 1:
            exercicio3();
            break;

        case 2:
            exercicio4();
            break;

        case 3:
            exercicio5();
            break;

        case 4:
            exercicio7();
            break;

        case 0:
            system("pause");
            break;

        default:
            printf("Valor inv�lido");

        }
        if (option !=0)
        {
            system("pause");
        }
    }
    while (option != 0 );
    return 0;
}


int maiorquezero()
{
    int n = 0;
    printf("Escolha um n�mero maior que zero: ");
    scanf("%d", & n);

    while(n < 0)
    {
        printf("Escolha um n�mero maior que 0: ");
        scanf("%d", & n);
    }
    return n;
}

int hipotenusa(int cat1,int cat2)
{
    int h = 0;

    cat1 = cat1 * cat1;
    cat2 = cat2 * cat2;
    h = cat1 + cat2;
    h = sqrt(h);

    return h;

}

int exercicio3()
{
    int x, a, b;

    a = maiorquezero();
    b = maiorquezero();

    while (a >= 0 && b >= 0)
    {
        x = hipotenusa(a, b);

        printf("A hipotenusa �: %d \n", x);

        a = maiorquezero();
        b = maiorquezero();

    }

}
int checkParImpar(int n)
{
    bool t = true;
    if (n % 2 == 1 )
    {
        t = false;
    }
    return t;
}

int exercicio4()
{
    int num, cont = 0;
    num = maiorquezero();


    while (num != 0)
    {
        if (checkParImpar(num))
        {
            printf("Par:%d \n", num);
            cont = cont + 1;
        }
        num = maiorquezero();
    }
    printf("Total de n�meros pares: %d \n", cont);
}

int nDivisivelN(int num, int div)
{

    if (num % div == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int exercicio5()
{
    int num1, num2;
    int checkFunction;

    num1 = maiorquezero();
    num2 = maiorquezero();

    while (num1 > 0 && num2 > 0)
    {
        checkFunction = nDivisivelN(num1, num2);
        if (checkFunction == 1)
        {
            printf("%d � divis�vel por %d \n \n", num1, num2);
        }
        num1 = maiorquezero();
        num2 = maiorquezero();
    }
}


float codigoPreco(preco)

{
    switch(preco)
    {
    case 100:
        return 1.20;
    break;

    case 101:
        return 1.50;
    break;

    case 102:
        return 2.50;
    break;

    case 103:
        return 2.75;
    break;

    default:
        printf("Valor inv�lido");
    }
}

int exercicio7(){
    int num, quantidade;
    float total, preco;

    printf("Digite um c�digo: ");
    scanf("%d", & num);

    printf("Digite a quantidade: ");
    scanf("%d", & quantidade);

    total = codigoPreco(num) * quantidade;

    printf("O total � %.2f \n", total);

}

