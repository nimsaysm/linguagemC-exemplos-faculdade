#include <stdio.h>
#include <stdlib.h>

int main(){
    // 3. Imagine que você esteja ensinando a tabuada para uma criança e precisa mostrar 
    //a ela todas as possíveis multiplicações entre os números que vão de um até dez.
    //Assim, elabore um programa que imprima a tabuada do um ao dez.

    printf("Tabuada do 10:");   
    for (int i = 0; i <= 10; i++) {
        printf("\n10 x %d = %d", i, i * 10);
    }
    return 0;
}

