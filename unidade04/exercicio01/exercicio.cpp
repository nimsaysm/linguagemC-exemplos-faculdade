#include <stdio.h>
#include <locale.h>

int main() {
    // 1. A computação, frequentemente, é utilizada para servir de ferramenta na 
    // identificação de diferenças ou semelhanças entre objetos. Dessa forma, faça 
    // um programa que leia dois vetores A e B e apresente a quantidade de posições 
    // que possuem elementos diferentes entre um vetor e outro.
    
    setlocale(LC_ALL, "");

    int tamanhoVetor, qtdPosicoesDiferentes = 0;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanhoVetor);

    int vetor1[tamanhoVetor];
    printf("Informe os elementos do vetor 1:\n");
    for(int i = 0; i < tamanhoVetor; i++) {
        printf("\nDigite o valor da posição %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    int vetor2[tamanhoVetor];
    printf("Informe os elementos do vetor 2:\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("\nDigite o valor da posição %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < tamanhoVetor; i++){
        if (vetor1[i] != vetor2[i]) {
            qtdPosicoesDiferentes = qtdPosicoesDiferentes + 1;
        }
    }

    printf("A quantidade de posições diferentes entre os dois vetores é de: %d", qtdPosicoesDiferentes);

    return 0;
}

