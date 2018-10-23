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
        printf("|ITEM |   Exercicios Funções   |\n");
        printf("|---- |------------------------|\n");
        printf("|  1  |   Conjunto de Valores  |\n");
        printf("|  2  |    Checar Par e Impar  |\n");
        printf("+-----+------------------------+\n");
        printf("\n");
        printf("Escolha um exercício: ");
        scanf("%d", & option);

        switch(option)
        {
        case 1:
            exercicio3();
            break;

        case 2:
            exercicio4();
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


int maiorquezero(){
    int n = 0;
    printf("Escolha um número maior que zero: ");
    scanf("%d", & n);

    while(n < 0){
        printf("Escolha um número maior que 0: ");
        scanf("%d", & n);
    }
    return n;
}

int hipotenusa(int cat1,int cat2){
    int h = 0;

    cat1 = cat1 * cat1;
    cat2 = cat2 * cat2;
    h = cat1 + cat2;
    h = sqrt(h);

    return h;

}

int exercicio3(){
    int x, a, b;

    a = maiorquezero();
    b = maiorquezero();

    while (a >= 0 && b >= 0){
        x = hipotenusa(a, b);

        printf("A hipotenusa é: %d \n", x);

        a = maiorquezero();
        b = maiorquezero();

    }

}
int checkParImpar(int n){
    bool t = true;
    if (n % 2 == 1 ){
        t = false;
    }
    return t;
}

int exercicio4(){
    int num, cont = 0;
    num = maiorquezero();


    while (num != 0){
        if (checkParImpar(num)){
            printf("Par:%d \n", num);
            cont = cont + 1;
        }
        num = maiorquezero();
    }
    printf("Total de números pares: %d \n", cont);
}
