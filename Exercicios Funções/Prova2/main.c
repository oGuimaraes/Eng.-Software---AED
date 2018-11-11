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
        printf("|ITEM |         PROVA 2           |\n");
        printf("|---- |---------------------------|\n");
        printf("|  1  |       Números Primos      |\n");
        printf("|  2  |     Função Soma (Valor)   |\n");
        printf("|  3  |  Função Soma (Referencia) |\n");
        printf("|  4  |  Função Soma (Global)     |\n");
        printf("+-----+---------------------------+\n");
        printf("\n");
        printf("Escolha um exercício: ");
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
        case 4:
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

int primos(int nInicial,int nFinal)
{
    int i, n;
    int div = 0, soma = 0;
    printf("Numeros Primos: ");

    for(n = nInicial; n <= nFinal; n++)
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                div++;
            }
        }
        if(div == 2)
        {
        soma = soma + n;
        printf("%d, ", n);
        }
        div = 0;
    }
    printf("\n");
    printf("-----\n");
    printf("Soma: %d\n", soma);
    printf("-----\n");

    return 0;

}

int exercicio1(){

    system("cls");

    int nInicial, nFinal;
    printf("Escolha o valor inicial do intervalo (Entre 10 e 70): ");
    scanf("%d", & nInicial);

    while(nInicial < 10 || nInicial > 70){
        printf("Escolha o valor inicial (Entre 10 e 70): ");
        scanf("%d", & nInicial);
    }

    printf("Escolha o valor final do intervalo (Entre 10 e 70): ");
    scanf("%d", &nFinal);

    while(nFinal < 10 || nFinal > 70){
        printf("Escolha o valor final (Entre 10 e 70): ");
        scanf("%d", &nFinal);
    }

    if(nInicial > nFinal){
        int aux;
        aux = nFinal;
        nFinal = nInicial;
        nInicial = aux;

    }

    primos(nInicial, nFinal);

}

int exercicio2() {
    int nTermos;
    float resultado;
    printf("Escreva o número de termos da soma: ");
    scanf("%d", &nTermos);

    resultado = soma(nTermos);

    printf("--\n");
    printf("Soma: %.2f\n", resultado);
    printf("--\n");
}


int soma(n){
    float resultadoSoma = 0, r = 0;
    int num = 2, div = 1;

    for (int i = 0; i < n; i++){
        resultadoSoma = resultadoSoma + ((float)num/(float)div);
        printf("I= %d, NUM=%d, DIV= %d Result: %2.f\n", i, num, div, resultadoSoma);
        num = num + 2;
        div = div + 2;
    }

    return resultadoSoma;

}

int somaReferencia(int n, float *soma){
    int num = 2, div = 1;
    *soma = 0;

    for (int i = 0; i < n; i++){
        *soma = *soma + ((float)num/(float)div);
        num += 2;
        div += 2;

    }

}
int exercicio3() {
    int nTermos;
    float soma;
    printf("Escreva o número de termos da soma: ");
    scanf("%d", &nTermos);
    somaReferencia(nTermos, &soma);
    printf("Para %d termos, o resultado é %5.2f \n",nTermos,soma);
}

int exercicio4(){
    int nTermos;
    printf("Escreva o número de termos da soma: ");
    scanf("%d", &nTermos);

    somaGlobal(nTermos);
}

float H = 0;

int somaGlobal(int n){
    int num = 2, div = 1;
    float r = 0;

    for (int i = 0; i < n; i++){
        H = H + ((float)num/(float)div);
        r = (float)num/(float)div;
        printf("Indice= %d, Num=%d, Div= %d \n", i, num, div);
        num = num + 2;
        div = div + 2;
    }
    printf("--\n");
    printf("Soma: %.3f\n", H);
    printf("--\n");
    return H;
}


