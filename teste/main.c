#include <stdio.h>
#include <stdlib.h>

int main(){
	int numeroEntrada, q, resto, i;
	char hexa[20] = {'\0'},inteiro[20] = {'\0'};

	printf("Informe um numero para converter para HEXADECIMAL.\n\n");
	printf("Numero: ");
	scanf("%d", &numeroEntrada);


	do{
		q = numeroEntrada / 16;
		resto = numeroEntrada % 16;
		numeroEntrada /= 16;

		switch(resto){
			case 10:
				strcat(hexa, "A");
			break;
			case 11:
				strcat(hexa, "B");
			break;
			case 12:
				strcat(hexa, "C");
			break;
			case 13:
				strcat(hexa, "D");
			break;
			case 14:
				strcat(hexa, "E");
			break;
			case 15:
				strcat(hexa, "F");
			break;
			case 16:
				strcat(hexa, "G");
			break;
			default:
				sprintf(inteiro, "%d", resto);
				strcat(hexa, inteiro);
		}
	}while(q != 0);

    printf("Valor em Hexadecimal: ");

	for(i=strlen(hexa); i >= 0; i--){
		printf("%c", hexa[i]);
	}
	printf("\n- \n");
	return 0;
}
