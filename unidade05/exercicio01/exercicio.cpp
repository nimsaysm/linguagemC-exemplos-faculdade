#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;

void positivoOuNegativo() {
    if (num % 2 == 0) {
        printf("O número é positivo");
    }
    else {
        printf("O número é negativo");
    }
}

int main() {
    // 1. É comum, em uma aplicação, ter de determinar quais números são pares ou impares 
    // entre todos os valores de um conjunto de dados. Dessa forma, faça um programa que verifica 
    // se determinado número é positivo ou negativo, por meio de uma função.
    
    setlocale(LC_ALL, "");

    printf("Digite um número: ");
    scanf("%d", &num);
    positivoOuNegativo();
    
    return 0;
}