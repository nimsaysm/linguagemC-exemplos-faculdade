#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca que add a codificação da linguagem da máquina

int main(){
    setlocale(LC_ALL, ""); //programa se baseia na codificação da máquina que executa


    /* 2. Escreva um programa que lela o nome de uma pessoa e imprima a seguinte mensagem, 
    na tela: "Bem-vindo(a) à disciplina de Algoritmos e Logica de Programação II, <nome>"; 
    onde o campo <none> deve ser substituído pelo nome informado pelo usuario. */
        
    char nome[30];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Bem-vindo(a) à disciplina de Algoritmos e Logica de Programação II, %s", nome);

    return 0;
}
