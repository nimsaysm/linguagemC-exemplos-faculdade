#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 1. É comum, em uma aplicação, ter de determinar quais números 
    são o maior ou o menor, dentre todos os valores de um conjunto 
    de dados. Assim sendo, escreva um programa que receba cinco números 
    inteiros e apresente o maior e o menor. */

    int num, maior, menor;

    printf("Digite o 1o numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    printf("Digite o 2o numero: ");
    scanf("%d", &num);
    if (num > maior) {
        maior = num;
    }
    if (num < menor) {
        menor = num;
    }

    printf("Digite o 3o numero: ");
    scanf("%d", &num);
    if (num > maior) {
        maior = num;
    }
    if (num < menor) {
        menor = num;
    }

    printf("Digite o 4o numero: ");
    scanf("%d", &num);
    if (num > maior) {
        maior = num;
    }
    if (num < menor) {
        menor = num;
    }

    printf("Digite o 5o numero: ");
    scanf("%d", &num);
    if (num > maior) {
        maior = num;
    }
    if (num < menor) {
        menor = num;
    }
    

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d", menor);

    return 0;
}