#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* 2. Em algumas situações, em uma aplicação, é preciso 
    determinar quais são os números múltiplos de um ou mais 
    valores, dentre todos os valores de um conjunto de dados. 
    Dessa forma, faça um programa que leia um número e informe 
    se ele é divisível por três e por sete */

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("O numero eh divisivel por tres. \n");
    }
    if (num % 7 == 0) {
        printf("O numero eh divisivel por sete. \n");
    }
    return 0;
}