#include <stdio.h>
#include <stdlib.h>

int main() {

    //1. Faça um programa que leia números inteiros até que seja informado o valor 0. 
    //Apresente a média dos valores, o maior e o menor valor e a quantidade de números 
    //pares e ímpares.

    int num, soma = 0, maior, menor, quantidade = 0, qtdPares = 0, qtdImpares = 0;

    printf("Digite apenas numeros inteiros.\nPara encerrar o programa, digite 0.");

    do {
        printf("\nDigite um numero: ");
        scanf("%d", &num);

        soma = soma + num;

        if (num != 0) {
            quantidade = quantidade + 1;

            if(num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }


            if(num % 2 == 0) {
                qtdPares = qtdPares + 1;
            } else {
                qtdImpares = qtdImpares + 1;
            }

        }
        
    } while (num != 0);

    if (quantidade > 0) {
        double media = (double)soma / quantidade;

        printf("\nMedia dos valoes informados: %.2f", media);
        printf("\nMaior numero informado: %d", maior);
        printf("\nMenor numero informado: %d", menor);
        printf("\nQuantidade de impares: %d", qtdImpares);
        printf("\nQuantidade de pares: %d", qtdPares);
    } else {
        printf("\nNenhum numero informado.");
    }

    return 0;
}
