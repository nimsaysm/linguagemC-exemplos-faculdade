#include <stdio.h>
#include <stdlib.h>

int main() {
    int mes;

    printf("Digite um mes: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("O mes correspondente eh Janeiro");
        break;
    
    case 2:
        printf("O mes correspondente eh Fevereiro");
        break;

    case 3:
        printf("O mes correspondente eh Marco");
        break;

    case 4:
        printf("O mes correspondente eh Abril");
        break;

    case 5:
        printf("O mes correspondente eh Maio");
        break;

    case 6:
        printf("O mes correspondente eh Junho");
        break;

    case 7:
        printf("O mes correspondente eh Julho");
        break;

    case 8:
        printf("O mes correspondente eh Agosto");
        break;

    case 9:
        printf("O mes correspondente eh Setembro");
        break;

    case 10:
        printf("O mes correspondente eh Outubro");
        break;

    case 11:
        printf("O mes correspondente eh Novembro");
        break;

    case 12:
        printf("O mes correspondente eh Dezembro");
        break;

    default:
        printf("Este mes nao foi encontrado");
        break;
    }

    return 0;
}