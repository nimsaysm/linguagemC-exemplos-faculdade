#include <stdio.h>
#include <locale.h>

int main() {
    // 2. É comum que um programa seja capaz de realizar a ordenação de 
    // elementos ou dados de forma a facilitar as operações futuras e a 
    // apresentação deste conjunto de dados. Assim sendo, escreva um 
    // programa que leia um vetor A e o apresente em ordem decrescente.
    setlocale(LC_ALL, "");
    
    int tamanho, aux, i, j;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetorA[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o %d valor do vetor: ", i);
        scanf("%d", &vetorA[i]);
    }

    for (i = 0; i < tamanho - 1; i++) {//ordenando
        for (j = i + 1; j < tamanho; j++)
        {
            if (vetorA[i] < vetorA[j]) {
                aux = vetorA[i];
                vetorA[i] = vetorA[j];
                vetorA[j] = aux;
            }
        }
    }

    for (i = 0; i < tamanho; i++) { //imprimindo os valores
        printf("Vetor[%d] = %d\n", i, vetorA[i]);
    }

    return 0;
}