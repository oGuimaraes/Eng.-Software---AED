#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int option;
    do
    {

        system("CLS");
        printf("________________________________\n");
        printf("                MENU             \n");

        printf("1) N�mero Fatorial \n");
        printf("2) Sequencia de Fibonacci\n");
        printf("3) Numero com caracteristica\n");
        printf("4) Taboada\n");
        printf("5) Tuboada Completa\n");


        printf("________________________________\n");
        printf("             LISTA 3             \n");
        printf("6) Quadrado e Cubo\n");
        printf("7) N�meros Pares e Impar\n");
        printf("8) Maior, menor e m�dia\n");
        printf("9) Somat�rio\n");
        printf("10) Calculo da S�rie I\n");
        printf("11) C�lculo da S�rie II\n");
        printf("12) Dado 2 valores, mostre os divisores naquele intervalo \n");


        printf("\n0) Sair\n");
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

        case 6:
            exercicio6();
            break;

        case 7:
            exercicio7();
            break;

        case 8:
            exercicio8();
            break;

        case 9:
            exercicio9();
            break;

        case 10:
            exercicio10();
            break;

        case 11:
            exercicio11();
            break;

        case 12:
            exercicio12();
            break;

        case 0:
            system("pause;");
            break;

        default:
            printf("Op��o inv�lida.\n");
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

    printf("Escolha um n�mero: ");
    scanf("%d", & numero);

    aux = numero - 1;

    for ( aux = numero - 1; aux >= 1; aux--)
    {
        numero = numero * aux;
    }
    printf("Fatorial: %2.d ", numero);
}

int exercicio2()
{
    int numero, a = 1, b = 1, c, cont;

    printf("Escolha um n�mero: ");
    scanf("%d", & numero);

    printf("Sequ�ncia: %d %d ",a, b);

    for (cont = 0; cont < numero; cont++)
    {
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

    for (numero = 1; numero <= 99999; numero++)
    {
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

int exercicio4()
{
    int numero, mult, i;

    printf("Escreva um n�mero: ");
    scanf("%d", &numero);

    for (i = 1; i<10; i++)
    {
        mult = numero * i;
        printf("%d x %d = %d \n", numero, i, mult);
    }
}

int exercicio5()
{
    int numero, mult, i, j;

    for (i = 1; i<10; i++)
    {
        printf("---");
        printf("\n");
        printf("Taboada do %d \n", i);

        for (j = 1; j<10; j++)
        {
            mult = i * j;
            printf("%d x %d = %d \n", i, j, mult);
        }

    }
}

int exercicio6()
{

    int i, quadrado, cubo;

    for (i = 0; i <= 10; i++)
    {
        quadrado = pow(i, 2);
        cubo = pow(i, 3);
        printf("N�mero: %d, Quadrado: %d, Cubo:%d \n", i, quadrado, cubo);
    }
}

int exercicio7()
{
    int i, numero, nPar = 0, nImpar = 0;

    printf("-\n");
    printf("Escreva 9999 para sair.\n");

    for (numero = 0; numero != 9999; numero = numero)
    {

        printf("Escreva um n�mero: ");
        scanf("%d", & numero);

        if (numero % 2 == 0)
        {
            nPar++;
        } else {
            nImpar++;
        }
    }
    nImpar--;
    printf("N�meros Pares: %d, N�meros Impares: %d \n", nPar, nImpar);
}

int exercicio8(){
    int numero, total = 0, contNumero = 0, maior = 0, menor = 0;
    float media;

    for (numero = 0; numero != -1; numero = numero ){
        printf("Escreva um n�mero: ");
        scanf("%d", & numero);

        if (numero != -1){
            total = total + numero;
            contNumero++;
            if (numero > maior){
                maior = numero;
            }
            if (numero < menor){
                menor = numero;
            }
        }
    }
    media = total/contNumero;
    printf("A m�dia � %2.f, o maior n�mero � %d e o menor � %d.", media, maior, menor, contNumero, total);
}

int exercicio9(){
    int numero, soma = 0, cont = 0;

    printf("Escreva um n�mero: ");
    scanf("%d", & numero);

    for (cont = 0; cont <= numero; cont++){
        soma = soma + cont;
    }

    printf("Somatorio: %d \n", soma);

}

int exercicio10(){
    int numero, num = 1, den = 1, sinal = 1, cont = 0;
    float s = 0, fracao;

    printf("Escreva um termo: ");
    scanf("%d", & numero);

    while (cont < numero){
        fracao = num / (float)pow(den,3) * sinal;
        s = s + fracao;
        den = den + 2;
        sinal = sinal * (-1);
        cont++;
    }
    printf("S = %.6f \n", s);

}

int exercicio11(){
    int numero, num = 1, den, sinal = 1, cont = 0;
    float s = 0, fracao;

    printf("Escreva um termo: ");
    scanf("%d", & numero);
    den = numero;

    while (cont < numero){
        fracao = (float)(num / den) * sinal;
        s = s + fracao;
        num++;
        den = den - 1;
        sinal = sinal * (-1);
        cont++;
    }
    printf("S = %.2f \n", s);
}

int exercicio12(){
    int inicio, fim, i;

    printf("Escreva o primeiro valor do intervalo: ");
    scanf("%d", & inicio);
    printf("Escreva o segundo valor do intervalo: ");
    scanf("%d",& fim);

    for (inicio = inicio; inicio <= fim; inicio++ ){
        printf("Divisores do %d: 1", inicio);

        for(i = 2; i < 10; i++){
            if (inicio % i == 0){
                printf(", %d", i);
            }
        }
        printf("\n");
    }
}

