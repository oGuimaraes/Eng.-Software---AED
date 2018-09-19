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
        printf("________________________________\n");
        printf("                MENU             \n");

        printf("1) Número Fatorial \n");
        printf("2) Sequencia de Fibonacci\n");
        printf("3) Numero com caracteristica\n");
        printf("4) Taboada\n\n");
        printf("5) Tuboada Completa\n");

        printf("0) Sair\n");
        printf("________________________________\n");
        printf("Escolha um dos exercicios: ");
        scanf("%d", & option);

        switch (option)
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

        case 4:
            exercicio4();
            break;

        case 5:
            exercicio5();
            break;

        case 0:
            system("pause;");
            break;

        default:
            printf("Opção inválida.\n");
        }

        if (option != 0)
        {
            system("PAUSE\n");
        }

    }
    while (option != 0);
    return 0;
}

int exercicio1()
{
    int numero, aux;

    printf("Escolha um número: ");
    scanf("%d", & numero);

    aux = numero - 1;

    for ( aux = numero - 1; aux >= 1; aux--){
        numero = numero * aux;
    }
    printf("Fatorial: %2.d ", numero);
}

int exercicio2()
{
    int numero, a = 1, b = 1, c, cont;

    printf("Escolha um número: ");
    scanf("%d", & numero);

    printf("Sequência: %d %d ",a , b);

    for (cont = 0; cont < numero; cont++){
        c = a+b;
        printf("%d ", c);
        a = b;
        b = c;
    };
}

int exercicio3()
{
    int numero, dividendo, resto;
    float somaTermo;

    for (numero = 1000; numero < 10000; numero++){
        dividendo = numero/100;
        resto = numero % 100;
        somaTermo = pow((dividendo + resto),2);

        if (somaTermo == numero)
        {
            printf(" ,%d", numero);
        }
    }
    printf("\n");

    return 0;
}

int exercicio4(){
    int numero, mult, i;

    printf("Escreva um número: ");
    scanf("%d", &numero);

    for (i = 1; i<10; i++){
        mult = numero * i;
        printf("%d x %d = %d \n", numero, i, mult);
    }
}

int exercicio5(){
    int numero, mult, i, j;

    for (i = 1; i<10; i++){
        printf("---");
        printf("\n");
        printf("Taboada do %d \n", i);

        for (j = 1; j<10; j++){
            mult = i * j;
            printf("%d x %d = %d \n", i, j, mult);
        }

    }
}



