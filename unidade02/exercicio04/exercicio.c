#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 4. Elabore um programa que receba o salário de um funcionário e o código do cargo e apresente o cargo, o valor do aumento e o novo salário. A tabela a seguir apresenta os cargos.
    Código 1 | 2 | 3 | 4
    Cargo Servente | Pedreiro | Mestre de obras | Técnico de segurança
    Percentual do aumento 40% | 35% | 20% | 10% */

    float salario_antigo, aumento, novo_salario;
    int codigo;

    printf("Digite o codigo: ");
    scanf("%d", &codigo);
    printf("Digite seu salario atual: ");
    scanf("%f", &salario_antigo);

    switch (codigo)
    {
    case 1:
        aumento = 0.4;
        novo_salario = (aumento * salario_antigo) + salario_antigo;
        break;

    case 2:
        aumento = 0.35;
        novo_salario = (aumento * salario_antigo) + salario_antigo;
        break;

    case 3:
        aumento = 0.2;
        novo_salario = (aumento * salario_antigo) + salario_antigo;
        break;

    case 4:
        aumento = 0.1;
        novo_salario = (aumento * salario_antigo) + salario_antigo;
        break;
    
    default:
        printf("Esse codigo nao existe.");
        break;
    }

    
    printf("Seu antigo salario eh RS%.2f e seu novo salario eh RS%.2f", salario_antigo, novo_salario);

    return 0;
}
