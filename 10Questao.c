#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int numeroUm, numeroDois, resultado;
    int operacao ;

    printf("Digite o primeiro número para o calculo: ");
    scanf("%d",&numeroUm);

    printf("Digite o segundo número para o calculo: ");
    scanf("%d",&numeroDois);

    printf("Digite o código da operação desejada \n");
    printf("1- Soma \n");
    printf("2- Subtração \n");
    printf("3- Multiplicação \n");
    printf("4- Divisão \n");
    scanf("%i",&operacao);

    system("cls || clear");
    
    switch (operacao)
    {
    case 1:
    resultado = numeroUm + numeroDois;
    break;
    
    case 2:
    resultado = numeroUm - numeroDois;
    break;

    case 3:
    resultado = numeroUm * numeroDois;
    break;

    case 4:
    resultado = numeroUm / numeroDois;
    break;
    
    default:
    printf("Operação inválida!");
        break;
    }

    printf("1- Soma \n");
    printf("2- Subtração \n");
    printf("3- Multiplicação \n");
    printf("4- Divisão \n");
    printf("Código da operação escolhida: %i \n",operacao);
    printf("Resultado: %i \n",resultado);

    return 0; 
    }