#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

/* 3. Escreva um programa que leia um número positivo inteiro e 
apresente o quadrado e a raiz quadrada deste número: */

    int numero;
    float raiz;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    raiz = sqrt(numero);
    printf("A raiz de %d e %.2f", numero, raiz);
    return 0;
}