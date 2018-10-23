#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int option;
    do
    {
        system("CLS");
        printf("\n");
        printf("|ITEM |      CALCULADORA       |\n");
        printf("|---- |------------------------|\n");
        printf("|  1  | Calculadora Global     |\n");
        printf("|  2  | Calculadora Valor      |\n");
        printf("|  3  | Calculadora Referência |\n");


        printf("\n");
        printf("Escolha um item: ");
        scanf("%d", & option);

        switch(option)
        {
        case 1:
            exercicio1();
            break;

        case 2:
            exercicio2();
            break;

        case 3:
            exercicio3();
            break;

        case 0:
            system("pause");
            break;

        default:
            printf("Valor inválido");

        }
        if (option !=0)
        {
            system("pause");
        }
    }
    while (option != 0 );
    return 0;
}

exercicio1(){

};

exercicio2(){};
exercicio3(){};

