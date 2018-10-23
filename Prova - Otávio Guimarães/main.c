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
        printf("|ITEM |          PROVA         |\n");
        printf("|---- |------------------------|\n");
        printf("|  1  | Conta Cliente Hotel    |\n");
        printf("|  2  | Pesquisa de Habitantes |\n");

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

exercicio1()
{
    int totalDias;
    float totalConta;
    char nomeCliente[30];

    printf("Digite o nome do cliente: ");
    scanf("%s", & nomeCliente);

    printf("Total de dias hospedado no hotel: ");
    scanf("%d", & totalDias);

    if(totalDias > 15){
        totalConta = (750 * totalDias) * 1.1;
    }
    if(totalDias == 15){
        totalConta = (750 * totalDias) * 1.12;
    }
    if(totalDias < 15){
        totalConta = (750 * totalDias) * 1.15;
    }

        printf("|            CONTA             |\n");
        printf("|------------------------------|\n");
        printf("|Cliente: %s\n", nomeCliente);
        printf("|Numero de  Diárias: %d\n", totalDias);
        printf("|Valor a pagar: R$%2.f\n", totalConta);


}

exercicio2()
{
    int idade, sexo, qtdHabitante = 0, mulheresAte1000 = 0;
    float salario = 0, totalSalario = 0, cpf, mediaSalario = 0;

    printf("Digite o CPF do habitante: ");
    scanf("%f", & cpf);

    while (cpf > 0){
        qtdHabitante++;

        printf("Digite a idade do habitante: ");
        scanf("%d", & idade);
        if(idade < 18 || idade > 60){
            printf("- \n");
            printf("ERRO: Idade fora do parâmetro(Menor que 18 ou Maior que 60 anos)\n");
            printf("- \n");
        }

        while(idade < 18 || idade > 60){
            printf("Digite a idade do habitante: ");
            scanf("%d", & idade);
        }

            printf("Digite o sexo do Habitante  1)Masculino - 2) Feminino  : ");
            scanf("%i", & sexo);

            printf("Digite o salário do habitante(R$): ");
            scanf("%f", & salario);

            totalSalario = (float)totalSalario + salario;

            printf("\n --- \n");

            printf("Digite o CPF do habitante: ");
            scanf("%d", & cpf);

            if (sexo == 2 && salario <= 1000){
                mulheresAte1000++;
            }

    }
    mediaSalario = (totalSalario/qtdHabitante);
    printf("\n== Valores da Pesquisa ==\n");
    printf("Total de Habitantes Cadastrados: %d \n", qtdHabitante);
    printf("Salario Mulher até R$1000: %d \n", mulheresAte1000);
    printf("Média de Salário: R$%.2f \n", mediaSalario);

}





