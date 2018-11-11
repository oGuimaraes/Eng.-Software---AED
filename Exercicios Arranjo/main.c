#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int option;
    system("cls");
    do
    {
        printf("\n");
        printf("|ITEM |       LISTA ARRANJO     |\n");
        printf("|---- |-------------------------|\n");
        printf("|  1  |        Exercicio 1      |\n");
        printf("|  2  |        Exercicio 2      |\n");
        printf("|  3  |        Exercicio 3      |\n");
        printf("|  4  |        Exercicio 4      |\n");
        printf("|  5  |        Exercicio 5      |\n");
        printf("+-----+-------------------------+\n");
        printf("\n");
        printf("Escolha um exercício: ");
        scanf("%d", & option);

        switch(option)
        {
        case 1:
            exercicio1();
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

void leVetor(int *, int);
void imprimeVetor(int *, int, char *);
int fatorial(int);

void leVetor(int *vetor, int tamVetor){
    for (int i = 0; i < tamVetor; i++){
        printf("Digite o %dº termo do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void imprimeVetor(int *v, int tamVetor, char *nomeVetor)
{
    int i;
    for (i=0; i < tamVetor; i++){
        printf("\n%s[%d] = %d", nomeVetor, i, v[i]);
    }
}

int fatorial(int numero)
{
    int i, fat;
    fat = 1;
    for (i = 1; i <= numero; i++){
        fat = fat * i;
    }
    return fat;
}

int exercicio1(){
    setlocale(LC_ALL, "portuguese");
    int A[5], B[5], i;
    leVetor(A, 5);
    for (i = 0; i < 5 ; i++){
        B[i] = fatorial(A[i]);
    }
    imprimeVetor(B,5,"B");
    return 0;
}

