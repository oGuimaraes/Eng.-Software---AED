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

        printf("1) Número par ou ímpar\n");
        printf("2) Nome e nota do aluno \n");
        printf("3) O Estado da água é? \n");
        printf("4) Expressão de X \n");
        printf("5) Ordenar maior e menor \n");
        printf("6) Valores Divisiveis \n");
        printf("7) Possui Característica \n");
        printf("8) Valor da compra e troco\n");
        printf("9) Número Palíndromo \n");
        printf("10) Valor conta de água\n\n");
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

    int num;

    printf("Escreva um número: ");
    scanf("%d", & num);

    if (num % 2 == 0)
    {
        printf("%d é um número par\n", num);
    }
    else
    {
        printf("%d é um número ímpar\n", num);
    }
}

int exercicio2()
{
    char nome[30];
    float nota1, nota2, nota3, media;

    printf("Escreva o nome do aluno: ");
    scanf("%s", & nome);

    printf("Escreva a primeira nota: ");
    scanf("%f", & nota1);
    printf("Escreva a segunda nota: ");
    scanf("%f", & nota2);
    printf("Escreva a terceira nota: ");
    scanf("%f", & nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("\n Nome: %s n", nome);
    printf("Média das notas: %.2f \n", media);
}

int exercicio3()
{
    float tempAgua;

    printf("Escreva a temperatura da àgua (Cº): ");
    scanf("%f", & tempAgua);

    if (tempAgua < 0)
    {
        printf("Em %2.fCº o estado da água é sólido.\n", tempAgua);
    }
    else if (tempAgua > 0 && tempAgua < 99)
    {
        printf("Em %2.fCº o estado da água é líquido.\n", tempAgua);
    }
    else if (tempAgua > 100)
    {
        printf("Em %2.fCº o estado da água é gasoso.\n", tempAgua);
    }
    return 0;
}

int exercicio4()
{
    float x, y;

    printf("Digite um valor para x: ");
    scanf("%f", & x);

    if (x  < 0)
    {
        y = pow(x,2)+4;
        printf("O valor de y é %.2f \n", y);
    }
    else if (x > 0)
    {
        y = pow(x,3)-3;
        printf("O valor de y é %.2f \n", y);
    }
    else
    {
        printf("X não pode ser igual a 0 \n");
    }
}

int exercicio5()
{

    int A, B, C, troca;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &A);
    printf("Digite o segundo  numero inteiro: ");
    scanf("%d",&B);
    printf("Digite o terceiro numero inteiro: ");
    scanf ("%d", &C);

    if( A > B )
    {
        troca = B;
        B = A;
        A = troca;
    }
    if( B > C )
    {
        troca = C;
        C = B;
        B = troca;
    }
    if( A > B)
    {
        troca = B;
        B = A;
        A = troca;
    }

    printf("\n%d, %d, %d\n\n",A,B,C);
    return(0);
}

int exercicio6()
{
    int X, Y, Z;

    printf("Digite o valor de X: ");
    scanf("%d", &X);
    printf("Digite o valor de Y: ");
    scanf("%d",&Y);
    printf("Digite o valor de Z: ");
    scanf ("%d", &Z);

    if ( X % Y == 0 && X % Z == 0)
    {
        printf("\n %0.d é divisivel por %0.d e %0.d. \n", X, Y, Z);
    }
    else if (X % Y == 0 && X % Z != 0 )
    {
        printf("%0.d é divisivel por %0.d e não por %0.d. \n", X, Y, Z);
    }
    else if (X % Y != 0 && X % Z == 0 )
    {
        printf("%0.d é não é divisivel por %0.d e é por %0.d. \n", X, Y, Z);
    }
    else if (X % Y != 0 && X % Z != 0 )
    {
        printf("%0.d é não é divisivel por %0.d e nem por %0.d \n", X, Y, Z);
    }

}

exercicio7()
{
    int numero, dividendo, resto;
    float somaTermo;

    printf("Escreva um número: ");
    scanf("%d", & numero);
    dividendo = numero/100;
    resto = numero % 100;
    somaTermo = pow((dividendo + resto),2);

    if (somaTermo == numero)
    {
        printf("Possui característica");
    }
    else
    {
        printf("Não possui essa característica \n");
    }
    //printf("Dividendo: %2.d ,   Resto: %2.d somaTermo: %2.f \n", dividendo,resto, somaTermo);
    return 0;
};

exercicio8()
{
    int dinheiro, compra, troco, n1, n10, n100, notas, trocoTotal;

    printf("Qual o valor da compra em R$? ");
    scanf("%d", & compra);

    printf("Qual a quantida recebida da compra em R$: ");
    scanf("%d", & dinheiro);

    troco = dinheiro - compra;
    trocoTotal = troco;

    n100 = (troco / 100);
    troco = troco - (n100 * 100);
    n10 = (troco / 10);
    troco = troco - (n10 * 10);
    n1 = troco;

    notas = n1 + n10 + n100;

    printf("O valor da compra é: %d \n", compra);
    printf("O valor do troco é: %d \n\n", trocoTotal);
    printf("Quantidade de notas de R$100: %d \n", n100);
    printf("Quantidade de notas de R$10: %d \n", n10);
    printf("Quantidade de notas de R$1: %d \n\n", n1);

};

exercicio9()
{

    int digitado,num,invertido,digito;

    printf("Digite numero inteiro: ");
    scanf("%d", & digitado);
    num = digitado;
    invertido = 0;

    while(num != 0)
    {
        digito = num % 10;
        invertido = (invertido * 10) + digito;
        num = num / 10;
    }
    if(digitado == invertido)
        printf("Número Palíndromo \n");
    else
        printf("Número não é Palíndromo \n");
}

exercicio10() {

    float valor;
    int tipo, consumo;

    printf("\n 1- Residencial \n 2- Comercial \n 3- Industrial\n Dos itens acima, escolha o numero referente à sua conta: ");
    scanf("%d", & tipo);

    printf("Escreva a quantidade de água em m3 consumida: ");
    scanf("%d", & consumo);


    if ( tipo == 1){
        valor = 15 + 0,5 * consumo;
        printf("Valor da conta: %.2f \n", valor);
    }

    if ( tipo == 2) {

        if (consumo > 80){
            valor = 500 + (consumo - 80) * 2.5;
            printf("Valor da conta: %.2f \n", valor);
        } else {
            valor = 500;
            printf("Valor da conta: %.2f \n", valor);
        }

    }

    if (tipo == 3){
        if (consumo > 100){
            valor = 800 + (consumo - 100) * 4.0;
            printf("Valor da conta: %.2f \n", valor);
        } else {
            valor = 500;
            printf("Valor da conta: %.2f \n", valor);
        }
    }
};
