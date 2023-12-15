#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //4. É muito comum que programas tenham de implementar funcionalidades para identificar características 
    //específicas e realizar operações sobre um conjunto de dados.
    //Dessa forma, faça um programa que apresenta a soma de todos os números inteiros ímpares entre 200 e 500.

    
    setlocale(LC_ALL, "");
    int soma = 0;

    for (int i = 201; i < 500; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("A soma dos numeros entre 200 e 500 é %d", soma);
    return 0;
}