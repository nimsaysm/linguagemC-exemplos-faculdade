#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num1, num2, soma;

void somaIntervalo() {
    if (num1 > 0 && num2 > 0) {
        for (int i = num1; i <= num2; i++) {
                soma = soma + i;
            }

            printf("O resultado da soma dos números entre %d e %d é %d", num1, num2, soma);
    }
    else {
        printf("Os números devem ser positivos.");
    }
}

int main() {
    // 2. Provavelmente, você já deve ter se deparado com uma situação na qual é preciso calcular 
    // o somatório de valores compreendidos dentro de um intervalo determinado. Por isso, elabore 
    // uma função que receba dois números positivos por parâmetro e retorne a soma dos N números 
    // inteiros existentes entre eles.
    
    setlocale(LC_ALL, "");
    printf("Calcule os números inteiros positivos dentro de um intervalo específico...\n");
    printf("Digite o início do intervalo: ");
    scanf("%d", &num1);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &num2);
    somaIntervalo();

    return 0;
}