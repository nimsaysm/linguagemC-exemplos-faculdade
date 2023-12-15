#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

/* 4. Escreva um programa que receba quatro números inteiros, 
calcule e apresente a média aritmética entre eles. Observação: 
não esqueça de formatar o valor da média no momento de apresentá-lo,
para que sejam impressas apenas duas casas decimais. */

    int num1, num2, num3, num4;
    float media;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);
    printf("Escreva o segundo numero: ");
    scanf("%d", &num2);
    printf("Escreva o terceiro numero: ");
    scanf("%d", &num3);
    printf("Escreva o quarto numero: ");
    scanf("%d", &num4);

    media = (num1 + num2 + num3 + num4)/4;
    printf("A media dos numeros digitados e: %.2f", media);

    return 0;
}