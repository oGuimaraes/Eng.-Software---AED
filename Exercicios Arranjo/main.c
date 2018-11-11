#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int A[5], B[5], i;
    leVetor(A, 5);
    for (i = 0; i < 5 ; i++){
        B[i] = fatorial(A[i]);
    }
    imprimeVetor(B,5,"B");
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
